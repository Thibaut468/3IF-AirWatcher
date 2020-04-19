/*************************************************************************
						   TypeAttribut  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <TypeAttribut> (fichier TypeAttribut.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TypeAttribut.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type TypeAttribut::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

TypeAttribut & TypeAttribut::operator = (const TypeAttribut & unTypeAttribut)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

TypeAttribut::TypeAttribut (const TypeAttribut & unTypeAttribut)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <TypeAttribut>" << endl;
#endif
} //----- Fin de TypeAttribut (constructeur de copie)


TypeAttribut::TypeAttribut ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <TypeAttribut>" << endl;
#endif
} //----- Fin de TypeAttribut


TypeAttribut::~TypeAttribut ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <TypeAttribut>" << endl;
#endif
} //----- Fin de ~TypeAttribut


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
