#include<iostream>
#include"Morpion.h"
using namespace std;

int main(){
	Morpion Jeu;
	short ligne, colonne;
	cout << "Bienvenu sur le Morpion!" << endl;
	Jeu.AfficherMorpion();
	bool b = true;
	while(b){
		bool Placer = true;
		while(Placer){
			cout << "Joueur croix, choisissez la ligne: ";
			cin >> ligne;
			cout << "Joueur croix, choisissez la colonne: ";
			cin >> colonne;
			Placer = !Jeu.PlacerCroix(ligne, colonne);
		}
		Jeu.AfficherMorpion();
		if(Jeu.AfficherGagnant(false) != 0){
			b = false;
			Jeu.AfficherGagnant(true);
		}
		Placer = true;
		if(b){
			while(Placer){
				cout << "Joueur cercle, choisissez la ligne: ";
				cin >> ligne;
				cout << "Joueur cercle, choisissez la colonne: ";
				cin >> colonne;
				Placer = !Jeu.PlacerCercle(ligne, colonne);
			}
			Jeu.AfficherMorpion();
			if(Jeu.AfficherGagnant(false) != 0){
				b = false;
				Jeu.AfficherGagnant(true);
			}
		}
	}
	cin.get();
	cin.get();
    return 0;
}
