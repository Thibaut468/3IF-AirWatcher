/*************************************************************************
						   DataUtilisateurs  -  Classe stockant et gérant les informations des utilisateurs
							 -------------------
	début                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Réalisation de la classe <DataUtilisateurs> (fichier DataUtilisateurs.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <string>
#include <fstream>

//------------------------------------------------------ Include personnel
#include "DataUtilisateurs.h"
#include "UtilisateurProfessionnel.h"
#include "Utilisateur.h"
#include "UtilisateurPrive.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

// type DataUtilisateurs::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

bool DataUtilisateurs::ChargerUtilisateurs(string fichierUtilisateurs)
// Algorithme : La méthode ouvre en lecture le fichier, et lis pour chaque ligne
// les informations successives de l'utilisateur, puis l'ajoute à la liste
// des utilisateurs
//
{
	ifstream fUtilisateurs(fichierUtilisateurs);

	if(!fUtilisateurs.is_open())
	{
		cerr<<"Erreur lors du chargement des utilisateurs"<<endl;
		return false;
	}
	else
	{
		this->cheminFichierUtilisateurs = fichierUtilisateurs;
		string informationsLues[7];
		char charLecture[100]; // buffer de lecture
		while(fUtilisateurs)
		{
			fUtilisateurs.getline(charLecture,100,'|');
			if(!fUtilisateurs) // on vérifie si on a atteint la fin du fichier
			{
				break;
			}
			informationsLues[0]=charLecture;

			for(int i=1;i<6;i++) // on lit les informations une à une
			{
				if(i<5 || informationsLues[0]=="fournisseur")
				// seul les comptes fournisseurs ont un séparateur '|' à l'information n°5
				// donc pour les autres comptes (else) on lit jusqu'à la fin de la ligne
				{
					fUtilisateurs.getline(charLecture,100,'|');
				}
				else
				{
					fUtilisateurs.getline(charLecture,100,'\n');
				}
				informationsLues[i]=charLecture;
			}
			if(informationsLues[0]=="fournisseur") 
			// si c'est un compte fournisseur, on lit le nom de la compagnie
			{
				fUtilisateurs.getline(charLecture,100,'\n');
				informationsLues[6]=charLecture;
			}

			
			// insertion dans la liste des utilisateurs
			Utilisateur* utilisateurLu;
			// on détecte d'abord le type
			if(informationsLues[0]=="privé")
			{
				utilisateurLu = new UtilisateurPrive(informationsLues[1],informationsLues[2],informationsLues[3],informationsLues[4],informationsLues[5]); 
				this->utilisateurs.push_back(utilisateurLu);
			}
			else if(informationsLues[0]=="agence")
			{

			}
			else
			{
				
			}
			
		}
	}

	return true;

} //----- Fin de ChargerUtilisateurs

bool DataUtilisateurs::VerifierUnCompte(string mail,bool validation)
// Algorithme :
//
{

} //----- Fin de VerifierUnCompte

vector<UtilisateurProfessionnel*> DataUtilisateurs::ObtenirComptesEnAttente()
// Algorithme :
//
{

} //----- Fin de ObtenirComptesEnAttente

bool DataUtilisateurs::GererCompte(string mail, string nom, string prenom, string mdp)
// Algorithme :
//
{

} //----- Fin de GererCompte

vector<Utilisateur*> DataUtilisateurs::GetUtilisateurs()
// Algorithme :
//
{
	return this->utilisateurs;
} //----- Fin de GetUtilisateurs

Utilisateur* DataUtilisateurs::SeConnecter(string identifiant, string mdp)
// Algorithme : Vérifie dans la liste des utilisateurs si les informations
// données correspondent à un utilisateur
//
{
	vector<Utilisateur*>::iterator it;
	for(it=this->utilisateurs.begin();it!=this->utilisateurs.end();++it)
	{
		if((*it)->GetIdentifiant()==identifiant && (*it)->GetMdp()==mdp)
		{
			return (*it);
		}
	}

	// non trouvé
	return nullptr;
} //----- Fin de SeConnecter

bool DataUtilisateurs::SeCreerUnComptes(string* informationsUtilisateur)
// Algorithme : Aucun
//
{
	string typeCompte = informationsUtilisateur[0];
	Utilisateur* utilisateurCree;

	// vérification de l'unicité de l'identifiant et du mail
	vector<Utilisateur*>::iterator it;
	for(it=this->utilisateurs.begin();it!=this->utilisateurs.end();++it)
	{
		if((*it)->GetIdentifiant()==informationsUtilisateur[1] || (*it)->GetMail()==informationsUtilisateur[5])
		{
			// donnée(s) non unique(s)
			return false;
		}
	}

	if(typeCompte=="privé")
	{
		utilisateurCree = new UtilisateurPrive(informationsUtilisateur[1],informationsUtilisateur[2],informationsUtilisateur[3],informationsUtilisateur[4],informationsUtilisateur[5]);
		this->utilisateurs.push_back(utilisateurCree);
	}
	else if(typeCompte=="fournisseur")
	{

	}
	else // agence
	{
		
	}

	// écriture dans le fichier du nouvel utilisateur
	ofstream fUtilisateurs(cheminFichierUtilisateurs,std::ofstream::app);
	if(!fUtilisateurs.is_open())
	{
		cerr<<"Erreur lors de l'écriture d'un nouvel utilisateur"<<endl;
		return false;
	}
	else
	{
		//construction de la ligne à écrire
		string ligneUtilisateur="";
		for(int i=0;i<6;i++)
		{
			ligneUtilisateur+=informationsUtilisateur[i];
			if(i<5 || informationsUtilisateur[0]=="fournisseur")
			{
				ligneUtilisateur+="|";
			}
			else
			{
				ligneUtilisateur+="\n";
			}
		}
		if(informationsUtilisateur[0]=="fournisseur")
		{
			ligneUtilisateur+=informationsUtilisateur[6]+"\n";
		}
		fUtilisateurs<<ligneUtilisateur;
	}

	return true;	
} //----- Fin de SeCreerUnComptes

//------------------------------------------------- Surcharge d'opérateurs

DataUtilisateurs & DataUtilisateurs::operator = (const DataUtilisateurs & unDataUtilisateurs)
// Algorithme : Aucun
//
{
	this->utilisateurs = unDataUtilisateurs.utilisateurs;
	this->cheminFichierUtilisateurs = unDataUtilisateurs.cheminFichierUtilisateurs;
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

DataUtilisateurs::DataUtilisateurs (const DataUtilisateurs & unDataUtilisateurs)
// Algorithme :Aucun
//
:cheminFichierUtilisateurs(unDataUtilisateurs.cheminFichierUtilisateurs),utilisateurs(unDataUtilisateurs.utilisateurs)
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <DataUtilisateurs>" << endl;
#endif
} //----- Fin de DataUtilisateurs (constructeur de copie)

DataUtilisateurs::DataUtilisateurs ()
// Algorithme : Aucun
//
:cheminFichierUtilisateurs("")
{
#ifdef MAP
	cout << "Appel au constructeur de <DataUtilisateurs (par défaut)>" << endl;
#endif
} //----- Fin de DataUtilisateurs (par défaut)

DataUtilisateurs::~DataUtilisateurs ()
// Algorithme : Aucun
//
{
#ifdef MAP
	cout << "Appel au destructeur de <DataUtilisateurs>" << endl;
#endif
	// on libère tous les utilisateurs en parcourant 'utilisateurs' avec un itérateur
	vector<Utilisateur*>::iterator it;
	for(it=utilisateurs.begin(); it!=utilisateurs.end();++it)
	{
		delete (*it);
	}
} //----- Fin de ~DataUtilisateurs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
