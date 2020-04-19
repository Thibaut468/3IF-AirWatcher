/*************************************************************************
						   MesureUtilisateur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <MesureUtilisateur> (fichier MesureUtilisateur.h) ------
#if ! defined ( MESUREUTILISATEUR_H )
#define MESUREUTILISATEUR_H

//--------------------------------------------------- Interfaces utilis�es
#include "Mesure.h"
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <MesureUtilisateur>
//
//
//------------------------------------------------------------------------ 

class MesureUtilisateur : public Mesure
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
	MesureUtilisateur & operator = (const MesureUtilisateur & unMesureUtilisateur);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	MesureUtilisateur (const MesureUtilisateur & unMesureUtilisateur);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	MesureUtilisateur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~MesureUtilisateur ();
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
	string label;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <MesureUtilisateur>

#endif // MESUREUTILISATEUR_H