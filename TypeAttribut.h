/*************************************************************************
						   TypeAttribut  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <TypeAttribut> (fichier TypeAttribut.h) ------
#if ! defined ( TYPEATTRIBUT_H )
#define TYPEATTRIBUT_H

//--------------------------------------------------- Interfaces utilis�es
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <TypeAttribut>
//
//
//------------------------------------------------------------------------ 

class TypeAttribut
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
	TypeAttribut & operator = (const TypeAttribut & unTypeAttribut);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	TypeAttribut (const TypeAttribut & unTypeAttribut);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	TypeAttribut ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~TypeAttribut ();
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
	string idAttribut;
	string unite;
	string description;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <TypeAttribut>

#endif // TYPEATTRIBUT_H