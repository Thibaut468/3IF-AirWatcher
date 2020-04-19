/*************************************************************************
						   Admin  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Admin> (fichier Admin.h) ------
#if ! defined ( ADMIN_H )
#define ADMIN_H

//--------------------------------------------------- Interfaces utilis�es
#include "Utilisateur.h"
#include "UtilisateurProfessionnel.h"
#include "Capteur.h"
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Admin>
//
//
//------------------------------------------------------------------------ 

class Admin: public Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public: 
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	bool VerifierUnCompte(string mail, bool validation);

	UtilisateurProfessionnel* ObtenirComptesEnAttente();

	bool GererCompte(string mail, string nom, string prenom, string mdp);

	bool AjouterCapteur(Capteur & capteur);

	bool ModifierCapteur(string id, string longitude, string latitude, string etat, string description);

//------------------------------------------------- Surcharge d'op�rateurs
	Admin & operator =(const Admin & unAdmin);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Admin(const Admin & unAdmin);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Admin();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Admin();
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

private:
	//------------------------------------------------------- Attributs priv�s

	//---------------------------------------------------------- Classes amies

	//-------------------------------------------------------- Classes priv�es

	//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Admin>

#endif //_ADMIN_H