/*************************************************************************
						   MesureUtilisateur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- R�alisation de la classe <MesureUtilisateur> (fichier MesureUtilisateur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "MesureUtilisateur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

// type MesureUtilisateur::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs

MesureUtilisateur & MesureUtilisateur::operator = (const MesureUtilisateur & unMesureUtilisateur)
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

MesureUtilisateur::MesureUtilisateur (const MesureUtilisateur & unMesureUtilisateur)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <MesureUtilisateur>" << endl;
#endif
} //----- Fin de MesureUtilisateur (constructeur de copie)


MesureUtilisateur::MesureUtilisateur ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <MesureUtilisateur>" << endl;
#endif
} //----- Fin de MesureUtilisateur


MesureUtilisateur::~MesureUtilisateur ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <MesureUtilisateur>" << endl;
#endif
} //----- Fin de ~MesureUtilisateur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es
