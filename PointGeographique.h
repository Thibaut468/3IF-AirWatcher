/*************************************************************************
						   PointGeographique  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <PointGeographique> (fichier PointGeographique.h) ------
#if ! defined ( POINTGEOGRAPHIQUE_H )
#define POINTGEOGRAPHIQUE_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <PointGeographique>
//
//
//------------------------------------------------------------------------ 

class PointGeographique
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
	PointGeographique & operator = (const PointGeographique & unPointGeographique);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	PointGeographique (const PointGeographique & unPointGeographique);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	PointGeographique ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~PointGeographique ();
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
	double longitude;
	double latitude;
private:
//------------------------------------------------------- Attributs priv�s

//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes priv�es

//----------------------------------------------------------- Types priv�s

};

//----------------------------------------- Types d�pendants de <PointGeographique>

#endif // POINTGEOGRAPHIQUE_H