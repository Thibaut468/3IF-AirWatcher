/*************************************************************************
						   AgenceGouvernementale  -  description
							 -------------------
	d�but                : 18/04/2020
	copyright            : (C) 2020 par Killian OECHSLIN, Thomas MIGNOT, Thibaut GRAVEY, Corentin BRANCHEREAU
*************************************************************************/

//---------- Interface de la classe <AgenceGouvernementale> (fichier AgenceGouvernementale.h) ------
#if ! defined ( AGENCEGOUVERNEMENTALE_H )
#define AGENCEGOUVERNEMENTALE_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <AgenceGouvernementale>
//
//
//------------------------------------------------------------------------ 

class AgenceGouvernementale
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
	AgenceGouvernementale & operator = (const AgenceGouvernementale & unAgenceGouvernementale);
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	AgenceGouvernementale (const AgenceGouvernementale & unAgenceGouvernementale);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	AgenceGouvernementale ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~AgenceGouvernementale ();
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

//----------------------------------------- Types d�pendants de <AgenceGouvernementale>

#endif // AGENCEGOUVERNEMENTALE_H