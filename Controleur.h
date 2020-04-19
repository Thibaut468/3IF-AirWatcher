/*************************************************************************
						   Controleur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Controleur> (fichier Controleur.h) ------
#if ! defined ( CONTROLEUR_H )
#define CONTROLEUR_H

//--------------------------------------------------- Interfaces utilis�es
#include "Utilisateur.h"
#include "Affichage.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Controleur>
//
//
//------------------------------------------------------------------------ 

class Controleur
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
	Controleur & operator = (const Controleur & unControleur);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Controleur (const Controleur & unControleur);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Controleur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Controleur ();
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
	Utilisateur* utilisateurConnecte;
	Affichage affichage;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Controleur>

#endif // CONTROLEUR_H
