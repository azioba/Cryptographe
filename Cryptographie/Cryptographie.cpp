// Cryptographie.cpp : Defines the entry point for the console application.


#include "stdafx.h"



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
	ChiffrementDecal(int decalage) : m_decalage(decalage)
	{
		// A vous de jouer...
	}

	// Surcharge de l'opérateur ()
	string operator()(string texte)
	{
		string result;

		//itérateur qui parcours le texte et applique le decallage souhaité
		for (char lettre : texte)
		{
			if (isupper(lettre))
			{
				result += (lettre + m_decalage - 'A') % 26 + 'A';
				result += ", ";
			}
			else
			{
				result += lettre;
				result += ", ";
			}
		}
		
		return result;
	}

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

	
	// Sauvegarde du texte dans un string
	string texte_crypte = foncteur(texte);
	
	//affichage du resultat
	cout << texte_crypte << endl;


	return 0;
}

