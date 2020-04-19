/*************************************************************************
						   CompagnieFournisseur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <CompagnieFournisseur> (fichier CompagnieFournisseur.h) ------
#if ! defined ( COMPAGNIEFOURNISSEUR_H )
#define COMPAGNIEFOURNISSEUR_H

//--------------------------------------------------- Interfaces utilis�es
#include "NettoyeurAir.h"
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <CompagnieFournisseur>
//
//
//------------------------------------------------------------------------ 

class CompagnieFournisseur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//


//------------------------------------------------- Surcharge d'op�rateurs
	CompagnieFournisseur & operator = (const CompagnieFournisseur & unCompagnieFournisseur);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	CompagnieFournisseur (const CompagnieFournisseur & unCompagnieFournisseur);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	CompagnieFournisseur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~CompagnieFournisseur ();
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
	string nom;
	NettoyeurAir* nettoyeursCompagnie;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <CompagnieFournisseur>

#endif // COMPAGNIEFOURNISSEUR_H