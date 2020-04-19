/*************************************************************************
						   CompagnieFournisseur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <CompagnieFournisseur> (fichier CompagnieFournisseur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CompagnieFournisseur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type CompagnieFournisseur::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

CompagnieFournisseur & CompagnieFournisseur::operator = (const CompagnieFournisseur & unCompagnieFournisseur)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

CompagnieFournisseur::CompagnieFournisseur (const CompagnieFournisseur & unCompagnieFournisseur)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <CompagnieFournisseur>" << endl;
#endif
} //----- Fin de CompagnieFournisseur (constructeur de copie)


CompagnieFournisseur::CompagnieFournisseur ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <CompagnieFournisseur>" << endl;
#endif
} //----- Fin de CompagnieFournisseur


CompagnieFournisseur::~CompagnieFournisseur ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <CompagnieFournisseur>" << endl;
#endif
} //----- Fin de ~CompagnieFournisseur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
