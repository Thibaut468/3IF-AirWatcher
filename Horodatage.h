/*************************************************************************
						   Horodatage  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <Horodatage> (fichier Horodatage.h) ------
#if ! defined ( HORODATAGE_H )
#define HORODATAGE_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Horodatage>
//
//
//------------------------------------------------------------------------ 

class Horodatage
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//


//------------------------------------------------- Surcharge d'op�rateurs
	Horodatage & operator = (const Horodatage & unHorodatage);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	Horodatage (const Horodatage & unHorodatage);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Horodatage ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Horodatage ();
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
	int annee;
	int mois;
	int jour;
	int heure;
	int minute;
	int seconde;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <Horodatage>

#endif // HORODATAGE_H