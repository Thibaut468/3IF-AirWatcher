/*************************************************************************
						   UtilisateurPrive  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <UtilisateurPrive> (fichier UtilisateurPrive.h) ------
#if ! defined ( UTILISATEURPRIVE_H )
#define UTILISATEURPRIVE_H

//--------------------------------------------------- Interfaces utilis�es
#include "Utilisateur.h"
#include "Mesure.h"
#include "MesureUtilisateur.h"
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <UtilisateurPrive>
//
//
//------------------------------------------------------------------------ 

class UtilisateurPrive : public Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	bool EntrerDonnees(string idAttribut, double valeur);

	int ObtenirPoints();

	Mesure** ConsulterDonneesEntrees();

//------------------------------------------------- Surcharge d'op�rateurs
	UtilisateurPrive & operator = (const UtilisateurPrive & unUtilisateurPrive);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	UtilisateurPrive (const UtilisateurPrive & unUtilisateurPrive);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	UtilisateurPrive ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~UtilisateurPrive ();
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
	int nbPoints;
	string idUtilisateur;
	MesureUtilisateur* donneesEntrees;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <UtilisateurPrive>

#endif // UTILISATEURPRIVE_H