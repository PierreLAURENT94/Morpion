//---------------------------------------------------------------------------

#ifndef MorpionH
#define MorpionH
//---------------------------------------------------------------------------

#include<iostream>
using namespace std;

class Morpion{
	private:
		char * Grille[9]; // =rien | X=croix | O=Cercle
		char * GrilleGagnant[9];
        bool CaseVide(short Case);
	public:
		Morpion();
		bool PlacerCroix(short ligne, short colonne);
		bool PlacerCercle(short ligne, short colonne);
		void AfficherMorpion();
		int AfficherGagnant(bool Afficher); // 0=rien | 1=croix | 2=Cercle
};

//---------------------------------------------------------------------------
#endif
