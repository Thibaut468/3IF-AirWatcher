/*************************************************************************
						   Admin  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <Admin> (fichier Admin.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>
#include <string>

//------------------------------------------------------ Include personnel
#include "Admin.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type Admin::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


bool Admin::VerifierUnCompte(string mail, bool validation)
// Algorithme :
//
{
	return false;
} //----- Fin de VerifierUnCompte

UtilisateurProfessionnel* Admin::ObtenirComptesEnAttente()
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ObtenirComptesEnAttente

bool Admin::GererCompte(string mail, string nom, string prenom, string mdp)
// Algorithme :
//
{
	return false;
} //----- Fin de GererCompte

bool Admin::AjouterCapteur(Capteur& capteur)
// Algorithme :
//
{
	return false;
} //----- Fin de AjouterCapteur

bool Admin::ModifierCapteur(string id, string longitude, string latitude, string etat, string description)
// Algorithme :
//
{
	return false;
} //----- Fin de ModifierCapteur

//------------------------------------------------- Surcharge d'op�rateurs

Admin & Admin::operator = (const Admin & unAdmin)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

Admin::Admin (const Admin & unAdmin)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Admin>" << endl;
#endif
} //----- Fin de Admin (constructeur de copie)


Admin::Admin ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Admin>" << endl;
#endif
} //----- Fin de Admin


Admin::~Admin ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Admin>" << endl;
#endif
} //----- Fin de ~Admin


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
