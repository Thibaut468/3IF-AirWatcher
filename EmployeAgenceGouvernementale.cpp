/*************************************************************************
						   EmployeAgenceGouvernementale  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <EmployeAgenceGouvernementale> (fichier EmployeAgenceGouvernementale.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "EmployeAgenceGouvernementale.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type EmployeAgenceGouvernementale::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode

Capteur* EmployeAgenceGouvernementale::ConsulterListeCapteurs()
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ConsulterListeCapteurs

Capteur** EmployeAgenceGouvernementale::IdentifierCapteursSimilaires()
// Algorithme :
//
{
	return nullptr;
} //----- Fin de IdentifierCapteursSimilaires

void EmployeAgenceGouvernementale::LabeliserDonneesUtilisateurs()
// Algorithme :
//
{
	return;
} //----- Fin de LabeliserDonneesUtilisateurs

//------------------------------------------------- Surcharge d'op�rateurs

EmployeAgenceGouvernementale & EmployeAgenceGouvernementale::operator = (const EmployeAgenceGouvernementale & unEmployeAgenceGouvernementale)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

EmployeAgenceGouvernementale::EmployeAgenceGouvernementale (const EmployeAgenceGouvernementale & unEmployeAgenceGouvernementale)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <EmployeAgenceGouvernementale>" << endl;
#endif
} //----- Fin de EmployeAgenceGouvernementale (constructeur de copie)


EmployeAgenceGouvernementale::EmployeAgenceGouvernementale ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <EmployeAgenceGouvernementale>" << endl;
#endif
} //----- Fin de EmployeAgenceGouvernementale


EmployeAgenceGouvernementale::~EmployeAgenceGouvernementale ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <EmployeAgenceGouvernementale>" << endl;
#endif
} //----- Fin de ~EmployeAgenceGouvernementale


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
