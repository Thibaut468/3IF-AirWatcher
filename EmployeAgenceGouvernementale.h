/*************************************************************************
						   EmployeAgenceGouvernementale  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <EmployeAgenceGouvernementale> (fichier EmployeAgenceGouvernementale.h) ------
#if ! defined ( EMPLOYEAGENCEGOUVERNEMENTALE_H )
#define EMPLOYEAGENCEGOUVERNEMENTALE_H

//--------------------------------------------------- Interfaces utilis�es
#include "UtilisateurProfessionnel.h"
#include "Capteur.h"
#include "AgenceGouvernementale.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <EmployeAgenceGouvernementale>
//
//
//------------------------------------------------------------------------ 

class EmployeAgenceGouvernementale : public UtilisateurProfessionnel
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	Capteur* ConsulterListeCapteurs();

	Capteur** IdentifierCapteursSimilaires();

	void LabeliserDonneesUtilisateurs();


//------------------------------------------------- Surcharge d'op�rateurs
	EmployeAgenceGouvernementale & operator = (const EmployeAgenceGouvernementale & unEmployeAgenceGouvernementale);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	EmployeAgenceGouvernementale (const EmployeAgenceGouvernementale & unEmployeAgenceGouvernementale);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	EmployeAgenceGouvernementale ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~EmployeAgenceGouvernementale ();
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
	AgenceGouvernementale agence;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <EmployeAgenceGouvernementale>

#endif // EMPLOYEAGENCEGOUVERNEMENTALE_H