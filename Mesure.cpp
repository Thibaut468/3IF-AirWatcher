/*************************************************************************
						   Mesure  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Mesure> (fichier Mesure.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Mesure.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Mesure::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

Mesure & Mesure::operator = (const Mesure & unMesure)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Mesure::Mesure (const Mesure & unMesure)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Mesure>" << endl;
#endif
} //----- Fin de Mesure (constructeur de copie)


Mesure::Mesure ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Mesure>" << endl;
#endif
} //----- Fin de Mesure


Mesure::~Mesure ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Mesure>" << endl;
#endif
} //----- Fin de ~Mesure


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
