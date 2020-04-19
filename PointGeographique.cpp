/*************************************************************************
						   PointGeographique  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <PointGeographique> (fichier PointGeographique.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "PointGeographique.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type PointGeographique::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

PointGeographique & PointGeographique::operator = (const PointGeographique & unPointGeographique)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

PointGeographique::PointGeographique (const PointGeographique & unPointGeographique)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <PointGeographique>" << endl;
#endif
} //----- Fin de PointGeographique (constructeur de copie)


PointGeographique::PointGeographique ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <PointGeographique>" << endl;
#endif
} //----- Fin de PointGeographique


PointGeographique::~PointGeographique ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <PointGeographique>" << endl;
#endif
} //----- Fin de ~PointGeographique


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
