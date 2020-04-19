/*************************************************************************
						   UtilisateurPrive  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <UtilisateurPrive> (fichier UtilisateurPrive.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "UtilisateurPrive.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type UtilisateurPrive::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode

bool UtilisateurPrive::EntrerDonnees(string idAttribut, double valeur)
// Algorithme :
//
{
	return false;
} //----- Fin de EntrerDonnees

int UtilisateurPrive::ObtenirPoints()
// Algorithme :
//
{
	return 0;
} //----- Fin de ObtenirPoints

Mesure** UtilisateurPrive::ConsulterDonneesEntrees()
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ConsulterDonneesEntrees

//------------------------------------------------- Surcharge d'op�rateurs

UtilisateurPrive & UtilisateurPrive::operator = (const UtilisateurPrive & unUtilisateurPrive)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

UtilisateurPrive::UtilisateurPrive (const UtilisateurPrive & unUtilisateurPrive)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <UtilisateurPrive>" << endl;
#endif
} //----- Fin de UtilisateurPrive (constructeur de copie)


UtilisateurPrive::UtilisateurPrive ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <UtilisateurPrive>" << endl;
#endif
} //----- Fin de UtilisateurPrive


UtilisateurPrive::~UtilisateurPrive ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <UtilisateurPrive>" << endl;
#endif
} //----- Fin de ~UtilisateurPrive


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
