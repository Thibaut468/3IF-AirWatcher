/*************************************************************************
						   UtilisateurProfessionnel  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <UtilisateurProfessionnel> (fichier UtilisateurProfessionnel.h) ------
#if ! defined ( UTILISATEURPROFESSIONNEL_H )
#define UTILISATEURPROFESSIONNEL_H

//--------------------------------------------------- Interfaces utilis�es
#include "Utilisateur.h"
#include "Mesure.h"
#include "Zone.h"
#include "Horodatage.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <UtilisateurProfessionnel>
//
//
//------------------------------------------------------------------------ 

class UtilisateurProfessionnel : public Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	Mesure* ConsulterMoyenneDonneesDatePrecise(Horodatage& date, Zone& zone);

	Mesure** ConsulterMoyenneDonneesPeriodePrecise(Horodatage& dateDebut, Horodatage& dateFin, Zone& zone);

	int ConsulterQualiteDatePrecise(Horodatage& date, Zone& zone);

	int* ConsulterQualitePeriodePrecise(Horodatage& dateDebut, Horodatage& dateFin, Zone& zone);

	Mesure** ObtenirDonneesBrutes();


//------------------------------------------------- Surcharge d'op�rateurs
	UtilisateurProfessionnel & operator = (const UtilisateurProfessionnel & unUtilisateurProfessionnel);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	UtilisateurProfessionnel (const UtilisateurProfessionnel & unUtilisateurProfessionnel);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	UtilisateurProfessionnel ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~UtilisateurProfessionnel ();
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
	bool compteValide;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <UtilisateurProfessionnel>

#endif // UTILISATEURPROFESSIONNEL_H