/*************************************************************************
						   AgenceGouvernementale  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <AgenceGouvernementale> (fichier AgenceGouvernementale.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AgenceGouvernementale.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type AgenceGouvernementale::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

AgenceGouvernementale & AgenceGouvernementale::operator = (const AgenceGouvernementale & unAgenceGouvernementale)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

AgenceGouvernementale::AgenceGouvernementale (const AgenceGouvernementale & unAgenceGouvernementale)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <AgenceGouvernementale>" << endl;
#endif
} //----- Fin de AgenceGouvernementale (constructeur de copie)


AgenceGouvernementale::AgenceGouvernementale ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <AgenceGouvernementale>" << endl;
#endif
} //----- Fin de AgenceGouvernementale


AgenceGouvernementale::~AgenceGouvernementale ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <AgenceGouvernementale>" << endl;
#endif
} //----- Fin de ~AgenceGouvernementale


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
