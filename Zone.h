/*************************************************************************
						   Zone  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Zone> (fichier Zone.h) ------
#if ! defined ( ZONE_H )
#define ZONE_H

//--------------------------------------------------- Interfaces utilis�es
#include "PointGeographique.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Zone>
//
//
//------------------------------------------------------------------------ 

class Zone
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	bool VerifierAppartenancePoint(PointGeographique & point);


//------------------------------------------------- Surcharge d'op�rateurs
	Zone & operator = (const Zone & unZone);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Zone (const Zone & unZone);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Zone ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Zone ();
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
	double rayon;
	PointGeographique centre;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Zone>

#endif // ZONE_H