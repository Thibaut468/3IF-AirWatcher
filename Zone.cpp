/*************************************************************************
						   Zone  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Zone> (fichier Zone.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Zone.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Zone::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode

bool Zone::VerifierAppartenancePoint(PointGeographique & point)
// Algorithme :
//
{
	return false;
} //----- Fin de VerifierAppartenancePoint

//------------------------------------------------- Surcharge d'op�rateurs

Zone & Zone::operator = (const Zone & unZone)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Zone::Zone (const Zone & unZone)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Zone>" << endl;
#endif
} //----- Fin de Zone (constructeur de copie)


Zone::Zone ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Zone>" << endl;
#endif
} //----- Fin de Zone


Zone::~Zone ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Zone>" << endl;
#endif
} //----- Fin de ~Zone


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
