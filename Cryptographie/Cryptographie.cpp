// Cryptographie.cpp : Defines the entry point for the console application.


#include "stdafx.h"
/////////////////////////////////////////////////////////////////////////////
//                                                                         //
//Algo de cryptographie simple par decallage, implementé par Abdoul Aziz Ba//
//																		   //
////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <cctype>

using namespace std;

// Foncteur qui effectue un chiffrement par decalage
class ChiffrementDecal {

public:

	// Constructeur prenant le decalage voulu en argument
	ChiffrementDecal(int decalage)
	{
		// A vous de jouer...
	}


	// A vous de jouer...

private:

	int m_decalage; // Le decalage a appliquer au texte

};


int main()
{

	// Le message a crypter
	string texte("BIENVENUE SUR LE MOOC C++ D'OCR !!");

	// Demande du decalage a l'utilisateur
	cout << "Quel decalage voulez-vous utiliser ? ";
	int decalage;
	cin >> decalage;

	// Creation du foncteur
	ChiffrementDecal foncteur(decalage);

	// Chaine de caracteres pour le message crypter
	string texte_crypte;

	// A vous de jouer.... 

	return 0;
}

