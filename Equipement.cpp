/*************************************************************************
						   Equipement  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Equipement> (fichier Equipement.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Equipement.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Equipement::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

Equipement & Equipement::operator = (const Equipement & unEquipement)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Equipement::Equipement (const Equipement & unEquipement)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Equipement>" << endl;
#endif
} //----- Fin de Equipement (constructeur de copie)


Equipement::Equipement ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Equipement>" << endl;
#endif
} //----- Fin de Equipement


Equipement::~Equipement ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Equipement>" << endl;
#endif
} //----- Fin de ~Equipement


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
