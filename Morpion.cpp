//---------------------------------------------------------------------------

#pragma hdrstop

#include "Morpion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Morpion::Morpion(){
	short b;
	for(b=0; b<9;b++){
		Grille[b] = " ";
	}
	b = 0;
    for(b=0; b<9;b++){
		GrilleGagnant[b] = " ";
	}
}

bool Morpion::CaseVide(short Case){
	if(Grille[Case] == "X" || Grille[Case] == "O"){
		return false;
	}
	else{
        return true;
	}
}

bool Morpion::PlacerCroix(short ligne, short colonne){
	short NumListe;
	if(ligne >= 4 || ligne <= 0 || colonne >= 4 || colonne <= 0 ){
		cout << "!!!!!!!!! Hors normes !!!!!!!!!" << endl;
		return false;
	}
	if(ligne == 1){
		NumListe = colonne-1;
	}
	else if(ligne == 2){
		NumListe = colonne-1+3;
	}
	else{
		NumListe = colonne-1+3+3;
	}
	if (CaseVide(NumListe)){
		Grille[NumListe] = "X";
		return true;
	}
	else{
		cout << "!!!!!!!!! Case deja utilise !!!!!!!!!" << endl;
		return false;
	}
}

bool Morpion::PlacerCercle(short ligne, short colonne){
	short NumListe;
    if(ligne >= 4 || ligne <= 0 || colonne >= 4 || colonne <= 0 ){
		cout << "!!!!!!!!! Hors normes !!!!!!!!!" << endl;
		return false;
	}
	if(ligne == 1){
		NumListe = colonne-1;
	}
	else if(ligne == 2){
		NumListe = colonne-1+3;
	}
	else{
		NumListe = colonne-1+3+3;
	}
	if (CaseVide(NumListe)){
		Grille[NumListe] = "O";
		return true;
	}
	else{
		cout << "!!!!!!!!! Case deja utilise !!!!!!!!!" << endl;
		return false;
	}
}

void Morpion::AfficherMorpion(){
	cout << " __1_2_3__ " << endl;
	cout << "|         |" << endl;
	cout << "1  " << Grille[0] << " " << Grille[1] << " " << Grille[2] << "  |" << endl;
	cout << "2  " << Grille[3] << " " << Grille[4] << " " << Grille[5] << "  |" << endl;
	cout << "3  " << Grille[6] << " " << Grille[7] << " " << Grille[8] << "  |" << endl;
	cout << "|_________|" << endl;
}

int Morpion::AfficherGagnant(bool Afficher){
	int Gagnant = 1;
	if(Grille[0] == "X" && Grille[4] == "X" && Grille[8] == "X"){
		GrilleGagnant[0] = "\\";
		GrilleGagnant[4] = "\\";
		GrilleGagnant[8] = "\\";
	}
	else if(Grille[2] == "X" && Grille[4] == "X" && Grille[6] == "X"){
		GrilleGagnant[2] = "/";
		GrilleGagnant[4] = "/";
		GrilleGagnant[6] = "/";
	}
	else if(Grille[0] == "X" && Grille[1] == "X" && Grille[2] == "X"){
		GrilleGagnant[0] = "-";
		GrilleGagnant[1] = "-";
		GrilleGagnant[2] = "-";
	}
	else if(Grille[3] == "X" && Grille[4] == "X" && Grille[5] == "X"){
		GrilleGagnant[3] = "-";
		GrilleGagnant[4] = "-";
		GrilleGagnant[5] = "-";
	}
	else if(Grille[6] == "X" && Grille[7] == "X" && Grille[8] == "X"){
		GrilleGagnant[6] = "-";
		GrilleGagnant[7] = "-";
		GrilleGagnant[8] = "-";
	}
	else if(Grille[0] == "X" && Grille[3] == "X" && Grille[6] == "X"){
		GrilleGagnant[0] = "|";
		GrilleGagnant[3] = "|";
		GrilleGagnant[6] = "|";
	}
	else if(Grille[1] == "X" && Grille[4] == "X" && Grille[7] == "X"){
		GrilleGagnant[1] = "|";
		GrilleGagnant[4] = "|";
		GrilleGagnant[7] = "|";
	}
	else if(Grille[2] == "X" && Grille[5] == "X" && Grille[8] == "X"){
		GrilleGagnant[2] = "|";
		GrilleGagnant[5] = "|";
		GrilleGagnant[8] = "|";
	}
	else{
		Gagnant = 2;
	   	if(Grille[0] == "O" && Grille[4] == "O" && Grille[8] == "O"){
			GrilleGagnant[0] = "\\";
			GrilleGagnant[4] = "\\";
			GrilleGagnant[8] = "\\";
		}
		else if(Grille[2] == "O" && Grille[4] == "O" && Grille[6] == "O"){
			GrilleGagnant[2] = "/";
			GrilleGagnant[4] = "/";
			GrilleGagnant[6] = "/";
		}
		else if(Grille[0] == "O" && Grille[1] == "O" && Grille[2] == "O"){
			GrilleGagnant[0] = "-";
			GrilleGagnant[1] = "-";
			GrilleGagnant[2] = "-";
		}
		else if(Grille[3] == "O" && Grille[4] == "O" && Grille[5] == "O"){
			GrilleGagnant[3] = "-";
			GrilleGagnant[4] = "-";
			GrilleGagnant[5] = "-";
		}
		else if(Grille[6] == "O" && Grille[7] == "O" && Grille[8] == "O"){
			GrilleGagnant[6] = "-";
			GrilleGagnant[7] = "-";
			GrilleGagnant[8] = "-";
		}
		else if(Grille[0] == "O" && Grille[3] == "O" && Grille[6] == "O"){
			GrilleGagnant[0] = "|";
			GrilleGagnant[3] = "|";
			GrilleGagnant[6] = "|";
		}
		else if(Grille[1] == "O" && Grille[4] == "O" && Grille[7] == "O"){
			GrilleGagnant[1] = "|";
			GrilleGagnant[4] = "|";
			GrilleGagnant[7] = "|";
		}
		else if(Grille[2] == "O" && Grille[5] == "O" && Grille[8] == "O"){
			GrilleGagnant[2] = "|";
			GrilleGagnant[5] = "|";
			GrilleGagnant[8] = "|";
		}
		else{
			Gagnant = 0;
		}
	}
	if(Afficher){
		if (Gagnant == 1) {
			cout << "!!!!!!!!! Croix a gagne, GG !!!!!!!!!" << endl;
		}
		else{
			cout << "!!!!!!!!! Cercle a gagne, GG !!!!!!!!!" << endl;
		}
		cout << " __1_2_3__ " << endl;
		cout << "|         |" << endl;
		cout << "1  " << GrilleGagnant[0] << " " << GrilleGagnant[1] << " " << GrilleGagnant[2] << "  |" << endl;
		cout << "2  " << GrilleGagnant[3] << " " << GrilleGagnant[4] << " " << GrilleGagnant[5] << "  |" << endl;
		cout << "3  " << GrilleGagnant[6] << " " << GrilleGagnant[7] << " " << GrilleGagnant[8] << "  |" << endl;
		cout << "|_________|" << endl;
	}
	return Gagnant;
}