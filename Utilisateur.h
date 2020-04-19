/*************************************************************************
						   Utilisateur  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Utilisateur> (fichier Utilisateur.h) ------
#if ! defined ( UTILISATEUR_H )
#define UTILISATEUR_H

//--------------------------------------------------- Interfaces utilis�es
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Utilisateur>
//
//
//------------------------------------------------------------------------ 

class Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	static Utilisateur* SeConnecter(string mail, string mdp);

	static bool SeDeconnecter(Utilisateur* utilisateur);

	static bool SeCreerUnCompte(string nom, string prenom, string mail, string mdp, string compagnie, string typeCompte);

	bool ModifierSonCompte(string nom, string prenom, string mdp);


//------------------------------------------------- Surcharge d'op�rateurs
	Utilisateur & operator = (const Utilisateur & unUtilisateur);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Utilisateur (const Utilisateur & unUtilisateur);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Utilisateur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Utilisateur ();
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- M�thodes prot�g�es

private:
//------------------------------------------------------- M�thodes priv�es

protected:
//----------------------------------------------------- Attributs prot�g�s
	string nom;
	string prenom;
	string mail;
	string mdp;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Utilisateur>

#endif // UTILISATEUR_H