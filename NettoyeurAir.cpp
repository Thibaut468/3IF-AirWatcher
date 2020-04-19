/*************************************************************************
						   NettoyeurAir  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <NettoyeurAir> (fichier NettoyeurAir.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "NettoyeurAir.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type NettoyeurAir::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

NettoyeurAir & NettoyeurAir::operator = (const NettoyeurAir & unNettoyeurAir)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

NettoyeurAir::NettoyeurAir (const NettoyeurAir & unNettoyeurAir)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <NettoyeurAir>" << endl;
#endif
} //----- Fin de NettoyeurAir (constructeur de copie)


NettoyeurAir::NettoyeurAir ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <NettoyeurAir>" << endl;
#endif
} //----- Fin de NettoyeurAir


NettoyeurAir::~NettoyeurAir ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <NettoyeurAir>" << endl;
#endif
} //----- Fin de ~NettoyeurAir


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
