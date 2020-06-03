#include "DataCapteurs.h"
#include "DataMesures.h"
#include "DataNettoyeurs.h"
#include "DataUtilisateurs.h"
#include "PointGeographique.h"
#include "Zone.h"
#include "Capteur.h"
#include "Horodatage.h"
#include "Mesure.h"

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

string cheminFichierUtilisateursPerso = "./Data/ownUsers.csv";
string cheminFichierAttributs = "./Data/attributes.csv";
string cheminFichierLabels = "./Data/labels.csv";
string cheminFichierMesures = "./Data/measurements.csv";
string cheminFichierNettoyeurs = "./Data/cleaners.csv";
string cheminFichierFournisseurs = "./Data/providers.csv";
string cheminFichierCapteurs = "./Data/sensors.csv";
string cheminFichierUtilisateurs = "./Data/users.csv";

DataUtilisateurs donneesUtilisateurs;
DataMesures donneesMesures;
DataCapteurs donneesCapteurs;
DataNettoyeurs donneesNettoyeurs;

using namespace std;

bool chargementDonnees()
{
    donneesNettoyeurs = DataNettoyeurs();
    donneesCapteurs = DataCapteurs();
    donneesMesures = DataMesures();
    donneesUtilisateurs = DataUtilisateurs();

    //Nettoyeurs
    bool ret = donneesNettoyeurs.ChargerNettoyeurs(cheminFichierNettoyeurs);

    //Compagnies
    ret = ret && donneesUtilisateurs.ChargerFournisseurs(cheminFichierFournisseurs,donneesNettoyeurs.GetNettoyeurs());

    //Capteurs
    ret = ret && donneesCapteurs.ChargerCapteurs(cheminFichierCapteurs);

    //Utilisateurs : users.csv (+écriture dans notre fichier)
    ret = ret && donneesCapteurs.ChargerCapteursPrives(cheminFichierUtilisateurs,cheminFichierUtilisateursPerso);

    //Utilisateurs : notre propre fichier
    ret = ret && donneesUtilisateurs.ChargerUtilisateurs(cheminFichierUtilisateursPerso);

    //TypeAttribut
    ret = ret && donneesMesures.ChargerAttributs(cheminFichierAttributs);

    //Mesures
    ret = ret && donneesMesures.ChargerMesures(cheminFichierMesures,donneesCapteurs.GetMapCapteurUtilisateur(),donneesUtilisateurs.GetUtilisateurs());
    
    //Fichiers labels
    ret = ret && donneesMesures.ChargerLabels(cheminFichierLabels,donneesCapteurs.GetMapCapteurUtilisateur());
    
    return (ret);
}

bool TestVerifierAppartenancePoint()
{
    PointGeographique centreZone(1,45);
    Zone zone(80,centreZone);

    PointGeographique p1(1.5,45.5); // Point situé dans la zone
    PointGeographique p2(2,50); // Point en dehors de la zone

    return zone.VerifierAppartenancePoint(p1) && !zone.VerifierAppartenancePoint(p2);
}

bool TestIdentifierCapteursSimilaires()
{
    bool resultat = true;

    string idCapteurReference1("Sensor36"); // Capteur correspondant à l'utilisateur possédant des données aberrantes
                                             // Nous devons donc obtenir aucun capteur similaire
    
    string idCapteurReference2("Sensor70"); // Capteur correspondant à l'utilisateur ayant rentré des données correctes
                                             // Nous devons donc obtenir plusierus capteurs similaires
    
    double precision = 0.05; // précision pour la similarité

    vector<Capteur*> groupeCapteurs1 = donneesMesures.IdentifierCapteursSimilaires(donneesCapteurs.GetCapteurs(),idCapteurReference1,precision);
    vector<Capteur*> groupeCapteurs2 = donneesMesures.IdentifierCapteursSimilaires(donneesCapteurs.GetCapteurs(),idCapteurReference2,precision);

    if(groupeCapteurs2.size()==6)
    {
        vector<Capteur*>::iterator it;
        for(it=groupeCapteurs2.begin();it!=groupeCapteurs2.end();++it)
        {
            // les ID spécifiés sont les ID des capteurs attendus
            if(!((*it)->getID()=="Sensor81" || (*it)->getID()=="Sensor72" || (*it)->getID()=="Sensor60" || (*it)->getID()=="Sensor61" || (*it)->getID()=="Sensor71" || (*it)->getID()=="Sensor80"))
            {
                resultat = false;
                break;
            }
        }
    }
    return resultat && groupeCapteurs1.size()==0; // le capteur d'id "Sensor36" doit avoir une liste de capteurs similaires vide
}

bool TestConsulterMoyenneDonneesPeriodePrecise()
{
    PointGeographique centreZone(1,45);
    Zone zone(150,centreZone);
    Horodatage debutPeriode(2019,5,1,0,0,0);
    Horodatage finPeriode(2019,5,3,24,0,0);

    vector<Mesure*> mesuresFiables = donneesMesures.ObtenirMesuresFiables(donneesCapteurs.GetMapCapteurUtilisateur(),donneesUtilisateurs.GetUtilisateurs(),cheminFichierUtilisateursPerso);
    Mesure** moyennesObtenues = donneesMesures.ConsulterMoyenneDonneesPeriodePrecise(debutPeriode,finPeriode,zone,mesuresFiables,donneesCapteurs.GetCapteurs());

    double moyenneAttendueO3[] = {51.0465,46.1463,52.1522};
    double moyenneAttendueSO2[] = {53.2899,51.7838,48.4189};
    double moyenneAttendueNO2[] = {42.2784,44.3521,46.0332};
    double moyenneAttenduePM10[] = {41.1561,47.7855,44.0998};

    if(moyennesObtenues[0][0].getValeurAttribut()==3) // on a obtenu 3 moyennes car il y a 3 jours dans la période
    {
        for(int i=1;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(moyennesObtenues[i][j].getTypeMesure()->getIdAttribut()=="O3")
                {
                    double ecartAbs = fabs(moyennesObtenues[i][j].getValeurAttribut()-moyenneAttendueO3[i-1]);
                    if(ecartAbs>0.1)
                    {
                        return false;
                    }
                }
                else if(moyennesObtenues[i][j].getTypeMesure()->getIdAttribut()=="SO2")
                {
                    double ecartAbs = fabs(moyennesObtenues[i][j].getValeurAttribut()-moyenneAttendueSO2[i-1]);
                    if(ecartAbs>0.1)
                    {
                        return false;
                    }
                }
                else if(moyennesObtenues[i][j].getTypeMesure()->getIdAttribut()=="NO2")
                {
                    double ecartAbs = fabs(moyennesObtenues[i][j].getValeurAttribut()-moyenneAttendueNO2[i-1]);
                    if(ecartAbs>0.1)
                    {
                        return false;
                    }
                }
                else if(moyennesObtenues[i][j].getTypeMesure()->getIdAttribut()=="PM10")
                {
                    double ecartAbs = fabs(moyennesObtenues[i][j].getValeurAttribut()-moyenneAttenduePM10[i-1]);
                    if(ecartAbs>0.1)
                    {
                        return false;
                    }
                }
            }
        }
    }
    else
    {
        return false;
    }
    
    return true;
}

bool TestRayonAction()
{
    bool resultat = true;

    //dates de fonctionnement du cleaner
    Horodatage debutFct(2019,2,1,12,0,0);
    Horodatage FinFct(2019,3,1,12,0,0);

    PointGeographique position(46.666667,3.666667);

    //nettoyeur correspondant au Cleaner1 
    NettoyeurAir* nettoyeur = new NettoyeurAir(true,0,debutFct,FinFct,"Cleaner1","",position);
                 
    double rayonMax = 1000;

    double epsilon = 50; //amélioration en %
    vector<Mesure*> listeMesuresBonnes = donneesMesures.ObtenirMesuresFiables(donneesCapteurs.GetMapCapteurUtilisateur(), donneesUtilisateurs.GetUtilisateurs(),cheminFichierUtilisateursPerso);

    vector<double>res = donneesNettoyeurs.ObtenirRayonActionNettoyeur(nettoyeur->getID(),donneesMesures,listeMesuresBonnes,donneesCapteurs.GetCapteurs(),2,epsilon/100.0,rayonMax);

    double rayon = res[0]; //rayon calculé

    double rayonReel = 125; //rayon théorique

    if(rayon>rayonMax)
    {
        // il manque des capteurs pour gagner en précision
        rayon = rayon-2*rayonMax;
    }

    else
    {   
        //on vérifie que le rayon attendu correspond approximativement au rayon calculé (marge de 5 km)
        resultat = resultat && abs(rayon-rayonReel)<5;

        //on vérifie que les indices d'amélioration sont au minimum ceux attendus
        resultat = resultat && res[1]>=epsilon/100;
        resultat = resultat && res[2]>=epsilon/100;
        resultat = resultat && res[3]>=epsilon/100;
        resultat = resultat && res[4]>=epsilon/100;
    }

    PointGeographique position2(45.333333,1.333333);

    //nettoyeur correspondant au Cleaner0
    NettoyeurAir* nettoyeur2 = new NettoyeurAir(true,0,debutFct,FinFct,"Cleaner0","",position2);
                 
    rayonMax = 1000;

    epsilon = 40;//amélioration en %
    listeMesuresBonnes = donneesMesures.ObtenirMesuresFiables(donneesCapteurs.GetMapCapteurUtilisateur(), donneesUtilisateurs.GetUtilisateurs(),cheminFichierUtilisateursPerso);

    res = donneesNettoyeurs.ObtenirRayonActionNettoyeur(nettoyeur2->getID(),donneesMesures,listeMesuresBonnes,donneesCapteurs.GetCapteurs(),2,epsilon/100.0,rayonMax);
    rayon = res[0]; //rayon calculé

    rayonReel = 0; //rayon théorique

    if(rayon>rayonMax)
    {
        // il manque des capteurs pour gagner en précision
        rayon = rayon-2*rayonMax;
    }
    else
    {   
        //on vérifie que le rayon attendu correspond approximativement au rayon calculé (marge de 5 km)
        resultat = resultat && abs(rayon-rayonReel)<5;

        //on vérifie que les indices d'amélioration sont au minimum ceux attendus
        resultat = resultat && res[1]>=epsilon/100;
        resultat = resultat && res[2]>=epsilon/100;
        resultat = resultat && res[3]>=epsilon/100;
        resultat = resultat && res[4]>=epsilon/100;
    }    
    delete nettoyeur;
    delete nettoyeur2;
    
    return resultat;
}

bool TestAppartenanceCompagnie()
{
    bool resultat = true;

    //définition des id des nettoyeurs
    string idNettoyeurO = "Cleaner0";
    string idNettoyeur1 = "Cleaner1";

    //défintion des fournisseurs
    CompagnieFournisseur* compagnieO = ((donneesUtilisateurs.GetFournisseurs()).find("Provider0"))->second;
    CompagnieFournisseur* compagnie1 = ((donneesUtilisateurs.GetFournisseurs()).find("Provider1"))->second;

    //on vérifie que seul le nettoyeur0 appartient au Provider0
    resultat = resultat && donneesNettoyeurs.VerifierAppartenanceNettoyeur("Cleaner0",compagnieO->getNettoyeurs())!=0;
    resultat = resultat && donneesNettoyeurs.VerifierAppartenanceNettoyeur("Cleaner1",compagnieO->getNettoyeurs())==0;

    //on vérifie que seul le nettoyeur1 appartient au Provider1
    resultat = resultat && donneesNettoyeurs.VerifierAppartenanceNettoyeur("Cleaner0",compagnie1->getNettoyeurs())==0;
    resultat = donneesNettoyeurs.VerifierAppartenanceNettoyeur("Cleaner1",compagnie1->getNettoyeurs())!=0;

    return resultat;
}

int main(void)
{
    cout<<"\n\n";
    if(chargementDonnees())
    {
        // chaque méthode de test renvoie true si elle est passée, false sinon

        cout<<"Méthode VerifierAppartenancePoint : ";
        if(TestVerifierAppartenancePoint()) cout<<"PASSED !"<<endl;
        else cout<<"FAILED !"<<endl;

        cout<<"Méthode IdentifierCapteursSimilaires : ";
        if(TestIdentifierCapteursSimilaires()) cout<<"PASSED !"<<endl;
        else cout<<"FAILED !"<<endl;

        cout<<"Méthode ConsulterMoyenneDonneesPeriodePrecise : ";
        if(TestConsulterMoyenneDonneesPeriodePrecise()) cout<<"PASSED !"<<endl;
        else cout<<"FAILED !"<<endl;

        cout<<"Méthode ObtenirRayonActionNettoyeur : ";
        if(TestRayonAction()) cout<<"PASSED !"<<endl;
        else cout<<"FAILED !"<<endl;

        cout<<"Méthode VerifierAppartenanceNettoyeur : ";
        if(TestAppartenanceCompagnie()) cout<<"PASSED !"<<endl;
        else cout<<"FAILED !"<<endl;
    }
    return 0;
}