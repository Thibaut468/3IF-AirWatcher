/*************************************************************************
						   Data  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Data> (fichier Data.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>
#include <string>

//------------------------------------------------------ Include personnel
#include "Data.h"
#include "TypeAttribut.h"
#include "Mesure.h"
#include "NettoyeurAir.h"
#include "Capteur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe
static TypeAttribut* attributs;
static Mesure** mesures;
static NettoyeurAir* nettoyeurs;
static Capteur* capteurs;
//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Data::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode

bool Data::ChargementDonnees(string cheminTypeAttribut, string cheminCapteur, string cheminMesure, string cheminNettoyeur)
// Algorithme :
//
{
	return false;
} //----- Fin de ChargementDonnees

//------------------------------------------------- Surcharge d'op�rateurs

Data & Data::operator = (const Data & unData)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Data::Data (const Data & unData)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Data>" << endl;
#endif
} //----- Fin de Data (constructeur de copie)


Data::Data ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Data>" << endl;
#endif
} //----- Fin de Data


Data::~Data ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Data>" << endl;
#endif
} //----- Fin de ~Data


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es