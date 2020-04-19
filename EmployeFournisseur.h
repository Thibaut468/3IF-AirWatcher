/*************************************************************************
						   EmployeFournisseur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <EmployeFournisseur> (fichier EmployeFournisseur.h) ------
#if ! defined ( EMPLOYEFOURNISSEUR_H )
#define EMPLOYEFOURNISSEUR_H

//--------------------------------------------------- Interfaces utilis�es
#include "UtilisateurProfessionnel.h"
#include "NettoyeurAir.h"
#include "CompagnieFournisseur.h"
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <EmployeFournisseur>
//
//
//------------------------------------------------------------------------ 

class EmployeFournisseur : public UtilisateurProfessionnel
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	bool AjouterNettoyeur(NettoyeurAir & nettoyeur);

	bool SupprimerNettoyeur(string idNettoyeur);

	bool ActiverNettoyeur(string idNettoyeur);

	bool DesactiverNettoyeur(string idNettoyeur);

	double ObtenirRayonActionNettoyeur(string idNettoyeur);

	NettoyeurAir* AfficherListeNettoyeur();


//------------------------------------------------- Surcharge d'op�rateurs
	EmployeFournisseur & operator = (const EmployeFournisseur & unEmployeFournisseur);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	EmployeFournisseur (const EmployeFournisseur & unEmployeFournisseur);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	EmployeFournisseur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~EmployeFournisseur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

private:
//------------------------------------------------------- M�thodes priv�es

protected:
//----------------------------------------------------- Attributs prot�g�s
	CompagnieFournisseur compagnie;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <EmployeFournisseur>

#endif // EMPLOYEFOURNISSEUR_H