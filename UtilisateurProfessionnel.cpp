/*************************************************************************
						   UtilisateurProfessionnel  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <UtilisateurProfessionnel> (fichier UtilisateurProfessionnel.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "UtilisateurProfessionnel.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type UtilisateurProfessionnel::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode

Mesure* UtilisateurProfessionnel::ConsulterMoyenneDonneesDatePrecise(Horodatage & date, Zone & zone)
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ConsulterMoyenneDonneesDatePrecise

Mesure** UtilisateurProfessionnel::ConsulterMoyenneDonneesPeriodePrecise(Horodatage & dateDebut, Horodatage & dateFin, Zone & zone)
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ConsulterMoyenneDonneesPeriodePrecise

int UtilisateurProfessionnel::ConsulterQualiteDatePrecise(Horodatage & date, Zone & zone)
// Algorithme :
//
{
	return 0;
} //----- Fin de ConsulterQualiteDatePrecise

int* UtilisateurProfessionnel::ConsulterQualitePeriodePrecise(Horodatage & dateDebut, Horodatage & dateFin, Zone & zone)
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ConsulterQualitePeriodePrecise

Mesure** UtilisateurProfessionnel::ObtenirDonneesBrutes()
// Algorithme :
//
{
	return nullptr;
} //----- Fin de ObtenirDonneesBrutes

//------------------------------------------------- Surcharge d'op�rateurs

UtilisateurProfessionnel & UtilisateurProfessionnel::operator = (const UtilisateurProfessionnel & unUtilisateurProfessionnel)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

UtilisateurProfessionnel::UtilisateurProfessionnel (const UtilisateurProfessionnel & unUtilisateurProfessionnel)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <UtilisateurProfessionnel>" << endl;
#endif
} //----- Fin de UtilisateurProfessionnel (constructeur de copie)


UtilisateurProfessionnel::UtilisateurProfessionnel ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <UtilisateurProfessionnel>" << endl;
#endif
} //----- Fin de UtilisateurProfessionnel


UtilisateurProfessionnel::~UtilisateurProfessionnel ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <UtilisateurProfessionnel>" << endl;
#endif
} //----- Fin de ~UtilisateurProfessionnel


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
