/*************************************************************************
						   DataNettoyeurs  -  Classe stockant et gérant les nettoyeurs d'air
							 -------------------
	début                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Réalisation de la classe <DataNettoyeurs> (fichier DataNettoyeurs.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "DataNettoyeurs.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

// type DataNettoyeurs::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

bool DataNettoyeurs::ChargerNettoyeurs(string fichierNettoyeurs)
// Algorithme : La méthode ouvre en lecture le fichier, et construit pour
// chaque ligne un nettoyeur, puis le stocke
//
{
	ifstream file(fichierNettoyeurs);
    if(!file.is_open())
	{
		cerr<<"Erreur lors du chargement des nettoyeurs"<<endl;
		return false;
	}
    else
    {
        char idNettoyeur[100];
        char latitudeString[100];
		char longitudeString[100];
		char timestampDebut[200];
		char timestampFin[200];
        while(file)
        {
            file.getline(idNettoyeur,100,';');
			if(!file) // on vérifie si on a atteint la fin du fichier
			{
				break;
			}
            file.getline(latitudeString,100,';');
			file.getline(longitudeString,100,';');
			file.get(); // on enlève le ; supplémentaire
			file.getline(timestampDebut,200,';');
			file.getline(timestampFin,200,';');
            file.get(); // on lit le \n de fin de ligne

			stringstream ssConversion;

			double latitude;
			double longitude;

			ssConversion<<latitudeString;
			ssConversion>>latitude;
			ssConversion.clear();
			ssConversion<<longitudeString;
			ssConversion>>longitude;

			// horodatage début

			int anneeDebut = (timestampDebut[0]-'0')*1000 + (timestampDebut[1]-'0')*100 + (timestampDebut[2]-'0')*10 + (timestampDebut[3]-'0');
			int moisDebut = (timestampDebut[5]-'0')*10 + (timestampDebut[6]-'0');
			int jourDebut = (timestampDebut[8]-'0')*10 + (timestampDebut[9]-'0');
			int heureDebut = (timestampDebut[11]-'0')*10 + (timestampDebut[12]-'0');
			int minuteDebut = (timestampDebut[14]-'0')*10 + (timestampDebut[15]-'0');
			int secondeDebut = (timestampDebut[17]-'0')*10 + (timestampDebut[18]-'0');

			// horodatage fin

			int anneeFin = (timestampFin[0]-'0')*1000 + (timestampFin[1]-'0')*100 + (timestampFin[2]-'0')*10 + (timestampFin[3]-'0');
			int moisFin = (timestampFin[5]-'0')*10 + (timestampFin[6]-'0');
			int jourFin = (timestampFin[8]-'0')*10 + (timestampFin[9]-'0');
			int heureFin = (timestampFin[11]-'0')*10 + (timestampFin[12]-'0');
			int minuteFin = (timestampFin[14]-'0')*10 + (timestampFin[15]-'0');
			int secondeFin = (timestampFin[17]-'0')*10 + (timestampFin[18]-'0');

			Horodatage horoDebut(anneeDebut,moisDebut,jourDebut,heureDebut,minuteDebut,secondeDebut);
			Horodatage horoFin(anneeFin,moisFin,jourFin,heureFin,minuteFin,secondeFin);

			PointGeographique pGeo(longitude,latitude);

			cout << "nettoyeur ajouté :" << "actif: " <<false <<"rayon: " <<0.0 << "heure debut:" << horoDebut << "heure fin: " << horoFin << "id: " << idNettoyeur << "coo" << longitude << " " << latitude << endl;
			NettoyeurAir* nettoyeur = new NettoyeurAir(false,0.0,horoDebut,horoFin,string(idNettoyeur),"",pGeo);

			this->nettoyeurs.insert(make_pair(string(idNettoyeur),nettoyeur));

        }
    }
    return true;
} //----- Fin de ChargerNettoyeurs


bool DataNettoyeurs::SauvegarderNettoyeurs(string fichierNettoyeurs)
// Algorithme : La méthode ouvre en ecriture le fichier, et pour chaque nettoyeur présent dans la map,
// construit une ligne
//
{
	ofstream file(fichierNettoyeurs,ios::trunc);
    if(!file.is_open())
	{
		cerr<<"Erreur lors de la sauvegarde des nettoyeurs"<<endl;
		return false;
	}
    else
    {
		unordered_map<string,NettoyeurAir*>::const_iterator it;
		for(it=nettoyeurs.begin();it!=nettoyeurs.end();it++)
		{
			cout << it->first << ";" 
				 << it->second->getPosition().getLatitude() << ";"
				 << it->second->getPosition().getLongitude() << ";;" 
				 << it->second->getDebutActivite() << ";" 
				 << it->second->getFinActivite() << '\n';
			
			file << it->first << ";" 
				 << it->second->getPosition().getLatitude() << ";"
				 << it->second->getPosition().getLongitude() << ";;" 
				 << it->second->getDebutActivite() << ";" 
				 << it->second->getFinActivite() << ";" << '\n';
		}
	}
	return true;
}//----- Fin de SauvegarderNettoyeurs


bool DataNettoyeurs::AjouterNettoyeur(NettoyeurAir & nettoyeur, CompagnieFournisseur & fournisseur)
// Algorithme : tant que l'id du nettoyeur est null ou présent dans la map, on change son id en "Cleaner" + le nombre de cleaner dans la map  (ex: Cleaner4)
// On vient ensuite ajouter le cleaner à la liste des cleaners, et a la liste du fournisseur
{
	string newId=nettoyeur.getID();
	int nb=0;
	unordered_map<string,NettoyeurAir*>::const_iterator got = nettoyeurs.find (newId);
	while(got!=nettoyeurs.end() || newId=="") //tant que l'id existe dans la map, ou est défini sur null, on cherche un nouvel id
	{
		newId="Cleaner"+to_string(nettoyeurs.size()+nb);
		got = nettoyeurs.find (newId);
		nb++;
		
	}	
	nettoyeur.setID(newId);
	fournisseur.addNettoyeur(& nettoyeur);
	cout << "id ajouté" << nettoyeur.getID()<<endl;
	return (nettoyeurs.insert(make_pair(nettoyeur.getID(),&nettoyeur))).second;
} //----- Fin de AjouterNettoyeurm



bool DataNettoyeurs::SupprimerNettoyeur(string idNettoyeur,CompagnieFournisseur & fournisseur)
// Algorithme :
// On vérifie que le cleaner à supprimer existe, et on vient ensuite le supprimer de la map, puis de la liste des fournissueur, ou la mémoire est libérée
{
	unordered_map<string,NettoyeurAir*>::const_iterator got = nettoyeurs.find (idNettoyeur);
	if(got!=nettoyeurs.end())
	{
		nettoyeurs.erase(idNettoyeur);
		fournisseur.deleteNettoyeur(got->second);
		return true;
	}	
	else{
		return false;
	}
} //----- Fin de SupprimerNettoyeur


bool DataNettoyeurs::ActiverNettoyeur(string idNettoyeur)
// Algorithme :
//
{
	unordered_map<string,NettoyeurAir*>::const_iterator got = nettoyeurs.find (idNettoyeur);

  if ( got == nettoyeurs.end() ){
		return false;
  }
  else{
	  	NettoyeurAir* cleaner=got->second;
		cleaner->setActif(true);
		return true;
  }
} //----- Fin de ActiverNettoyeur


bool DataNettoyeurs::DesactiverNettoyeur(string idNettoyeur)
// Algorithme :
//
{
	unordered_map<string,NettoyeurAir*>::const_iterator got = nettoyeurs.find (idNettoyeur);

  if ( got == nettoyeurs.end() ){
		return false;
  }
  else{
	  	NettoyeurAir* cleaner=got->second;
		cleaner->setActif(false);
		return true;
  }
} //----- Fin de DesactiverNettoyeur

NettoyeurAir* DataNettoyeurs::VerifierAppartenanceNettoyeur(string idNettoyeur,vector<NettoyeurAir*>& nettoyeursCompagnie)
// Algorithme : renvoie le nettoyeur correspondant à l'ID s'il appartient à la compagnie, 0 sinon
{
	for(int i=0;i<nettoyeursCompagnie.size();i++)
	{
		if((nettoyeursCompagnie[i])->getID()==idNettoyeur)
		{
			return nettoyeursCompagnie[i];
		}
	}
	return 0;

}
//----- Fin de VérifierAppartenanceNettoyeur

double DataNettoyeurs::ObtenirRayonActionNettoyeur(string idNettoyeur, DataMesures & dataM,vector<Mesure*>& listMesuresBonnes,unordered_map<string,Capteur*>& mapCapteurs,double precision,double epsilon, double rayonMax)
// Algorithme : recherche dichotomique du rayon d'action du nettoyeur avec son ID en paramètre  à partir des mesures enregistrées
//Epsilon définit le degré d'efficacité demandé au cleaner ( entre 0 et 1 ). La précison du rayon est spécifiée aussi.
{
	NettoyeurAir* nettoyeur=nettoyeurs[idNettoyeur];
	Horodatage debut=(*nettoyeur).getDebutActivite();
	Horodatage fin=(*nettoyeur).getFinActivite();

	double rayonMinT=0;
	double rayonMaxT=rayonMax;

	double rayon=0;

	while(abs(rayonMaxT-rayonMinT)/2>precision)//tant que la précision du rayon n'est pas atteinte
	{
		rayon=(rayonMaxT+rayonMinT)/2;
		Zone zone(rayon,(*nettoyeur).getPosition());

		double moyenneAvant=0;
		double moyenneApres=0;

		map<Horodatage,int> qualiteAirAvant=dataM.ConsulterQualitePeriodePrecise(debut.enleverJour(3),debut,zone,listMesuresBonnes,mapCapteurs);
		//tableau des indices atmos journaliers sur les 3 jours avant que le cleaner fonctionne

		map<Horodatage,int> qualiteAirApres=dataM.ConsulterQualitePeriodePrecise(fin,fin.ajouterJour(2),zone,listMesuresBonnes,mapCapteurs);
		//tableau des indices atmos journaliers sur les 2 jours après que le cleaner a fonctionné

		double indicateur=0;

		if(qualiteAirAvant.size()>0 && qualiteAirApres.size()>0)
		{

			for(auto it=qualiteAirAvant.begin();it!=qualiteAirAvant.end();it++)
			{
				moyenneAvant+=it->second;

			}
			moyenneAvant/=qualiteAirAvant.size();

			for(auto it=qualiteAirApres.begin();it!=qualiteAirApres.end();it++)
			{
				moyenneApres+=it->second;

			}

			moyenneApres/=qualiteAirApres.size();

			indicateur=(moyenneAvant-moyenneApres)/moyenneAvant;

		}


		else
		{	//si on a pas de mesure on arrête la recherche et on renvoie une valeur spéciale our signifier le manque de valeurs
		
			return rayon+rayonMax*2;
		}
		
		//MAJ des bornes du rayon en fonction de l'indicateur
		if(indicateur>epsilon)
		{
			rayonMinT=rayon;
		}

		else
		{
			rayonMaxT=rayon;
		}
			
	}

	return rayon;


} //----- Fin de ObtenirRayonActionNettoyeur



unordered_map<string,NettoyeurAir*> DataNettoyeurs::GetNettoyeurs()
// Algorithme :
//
{
    return nettoyeurs;
} //----- Fin de GetNettoyeurs


//------------------------------------------------- Surcharge d'opérateurs

DataNettoyeurs & DataNettoyeurs::operator = (const DataNettoyeurs & unDataNettoyeurs)
// Algorithme : Aucun
//
{
	this->nettoyeurs = unDataNettoyeurs.nettoyeurs;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

DataNettoyeurs::DataNettoyeurs (const DataNettoyeurs & unDataNettoyeurs)
// Algorithme : Aucun
//
:nettoyeurs(unDataNettoyeurs.nettoyeurs)
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <DataNettoyeurs>" << endl;
#endif
} //----- Fin de DataNettoyeurs (constructeur de copie)


DataNettoyeurs::DataNettoyeurs ()
// Algorithme : Aucun
//
{
#ifdef MAP
	cout << "Appel au constructeur (par défaut) de <DataNettoyeurs>" << endl;
#endif
} //----- Fin de DataNettoyeurs (par défaut)


DataNettoyeurs::~DataNettoyeurs ()
// Algorithme : Aucun
//
{
#ifdef MAP
	cout << "Appel au destructeur de <DataNettoyeurs>" << endl;
#endif
} //----- Fin de ~DataNettoyeurs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
