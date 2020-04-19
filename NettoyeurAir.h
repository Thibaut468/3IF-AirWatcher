/*************************************************************************
						   NettoyeurAir  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <NettoyeurAir> (fichier NettoyeurAir.h) ------
#if ! defined ( NETTOYEURAIR_H )
#define NETTOYEURAIR_H

//--------------------------------------------------- Interfaces utilis�es
#include "Equipement.h"
#include "Horodatage.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <NettoyeurAir>
//
//
//------------------------------------------------------------------------ 

class NettoyeurAir : public Equipement
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
	NettoyeurAir & operator = (const NettoyeurAir & unNettoyeurAir);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	NettoyeurAir (const NettoyeurAir & unNettoyeurAir);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	NettoyeurAir ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~NettoyeurAir ();
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
	bool actif;
	double rayon;
	Horodatage debutActivite;
	Horodatage finActivite;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <NettoyeurAir>

#endif // NETTOYEURAIR_H