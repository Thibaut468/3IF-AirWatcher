/*************************************************************************
						   Data  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Data> (fichier Data.h) ------
#if ! defined ( DATA_H )
#define DATA_H

//--------------------------------------------------- Interfaces utilis�es
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Data>
//
//
//------------------------------------------------------------------------ 

class Data
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	static bool ChargementDonnees(string cheminTypeAttribut, string cheminCapteur, string cheminMesure, string cheminNettoyeur);


//------------------------------------------------- Surcharge d'op�rateurs
	Data & operator = (const Data & unData);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Data (const Data & unData);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Data ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Data ();
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

private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Data>

#endif // DATA_H