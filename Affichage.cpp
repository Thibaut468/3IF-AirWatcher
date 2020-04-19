/*************************************************************************
						   Affichage  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Affichage> (fichier Affichage.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Affichage.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Affichage::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

Affichage & Affichage::operator = (const Affichage & unAffichage)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Affichage::Affichage (const Affichage & unAffichage)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Affichage>" << endl;
#endif
} //----- Fin de Affichage (constructeur de copie)


Affichage::Affichage ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Affichage>" << endl;
#endif
} //----- Fin de Affichage


Affichage::~Affichage ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Affichage>" << endl;
#endif
} //----- Fin de ~Affichage


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
