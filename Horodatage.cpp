/*************************************************************************
						   Horodatage  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Horodatage> (fichier Horodatage.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Horodatage.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Horodatage::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

Horodatage & Horodatage::operator = (const Horodatage & unHorodatage)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Horodatage::Horodatage (const Horodatage & unHorodatage)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Horodatage>" << endl;
#endif
} //----- Fin de Horodatage (constructeur de copie)


Horodatage::Horodatage ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Horodatage>" << endl;
#endif
} //----- Fin de Horodatage


Horodatage::~Horodatage ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Horodatage>" << endl;
#endif
} //----- Fin de ~Horodatage


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
