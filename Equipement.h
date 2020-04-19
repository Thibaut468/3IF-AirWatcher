/*************************************************************************
						   Equipement  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Equipement> (fichier Equipement.h) ------
#if ! defined ( EQUIPEMENT_H )
#define EQUIPEMENT_H

//--------------------------------------------------- Interfaces utilis�es
#include "PointGeographique.h"
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Equipement>
//
//
//------------------------------------------------------------------------ 

class Equipement
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
	Equipement & operator = (const Equipement & unEquipement);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Equipement (const Equipement & unEquipement);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Equipement ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Equipement ();
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
	string id;
	string description;
	PointGeographique position;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Equipement>

#endif // EQUIPEMENT_H