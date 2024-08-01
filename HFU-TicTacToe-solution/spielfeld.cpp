#include "spielfeld.hh"
#include <iomanip> /* für setw() */

/* Macht das Tippen leichter */
using namespace std;


Spielfeld::Spielfeld() {
    /* Initialisiere Spielfeld */
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            belegung[y][x] = Leer;
        }
    }
}

void Spielfeld::zeige(ostream& os) {
    /* Spaltenkopf */
    os << "  ABC" << endl;
    for (int y = 0; y < 3; y++) {
        /* Zeilenkopf */
        os << setw(1) << (y+1) << ' ';
        /* Zeileninhalt */
        for (int x = 0; x < 3; x++) {
            os << belegung[y][x];
        }
        os << endl;
    }
}

void Spielfeld::setze(int y, int x, Spieler spieler) {
    /* Belege nur valide Felder */
    if (0 <= x && x < 3 && 0 <= y && y < 3) {
        belegung[y][x] = (Markierung)spieler;
    }
}



Spielfeld::Spielstand Spielfeld ::hatGewonnen() {
    //Pruefe draw
        if (alleFelderBelegt()){
            return Unentschieden;
        }
    /* Prüfe auf vollständige Reihe */
        for (int y = 0; y < 3;y++){
         if (belegung[y][0] == belegung[y][1] &&
            belegung[y][0] == belegung[y][2] &&
            belegung[y][0] == Markierung_X   &&
            belegung[y][0] != Leer) {
                return Gewinn_X;
        }
        }
        for(int y = 0;y <3;y++){
         if (belegung[y][0] == belegung[y][1] &&
            belegung[y][0] == belegung[y][2] &&
            belegung[y][0] == Markierung_O   &&
            belegung[y][0] != Leer) {
                return Gewinn_O;
            }
        }

    /* Prüfe auf vollständige Spalte */
        for(int x = 0;x < 3;x++){
         if (belegung[0][x] == belegung[1][x] &&
            belegung[0][x] == belegung[2][x] &&
            belegung[0][x] == Markierung_X   &&
            belegung[0][x] != Leer) {
            return Gewinn_X;
        }
        }
        for(int x = 0;x < 3;x++) {
            if (belegung[0][x] == belegung[1][x] &&
                belegung[0][x] == belegung[2][x] &&
                belegung[0][x] == Markierung_O &&
                belegung[0][x] != Leer) {
                return Gewinn_O;
            }
        }


    /* Prüfe erste Diagonale */
        if (belegung[0][0] == belegung[1][1] &&
        belegung[0][0] == belegung[2][2] &&
        belegung[0][0] == Markierung_X   &&
        belegung[0][0] != Leer){
            return Gewinn_X;
    }
        else if (belegung[0][0] == belegung[1][1] &&
         belegung[0][0] == belegung[2][2] &&
         belegung[0][0] == Markierung_O   &&
         belegung[0][0] != Leer){
        return Gewinn_O;
    }
        /* zweite Diagonale*/
        else if(belegung[2][0] == belegung[1][1] &&
         belegung[2][0] == belegung[0][2] &&
         belegung[2][0] == Markierung_O   &&
         belegung[2][0] != Leer){
            return Gewinn_O;
        }else if(belegung[2][0] == belegung[1][1] &&
         belegung[2][0] == belegung[0][2] &&
         belegung[2][0] == Markierung_X   &&
         belegung[2][0] != Leer){
            return Gewinn_X;
        }
        else {
            return Offen;
        }


}


bool Spielfeld::alleFelderBelegt() {
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            if (belegung[y][x] == Leer) {
                return false;
            }
        }
    }

    return true;
}
char Spielfeld::weiterspielen(char Zustimmung) {
    if (Zustimmung == 'y'){
        return 'y';
    }
    if(Zustimmung == 'h'){
        return 'h';
    }
    if (Zustimmung == 'n'){
        cout << "Danke fuer's Spielen!";
        return 'n';
    }
    if (Zustimmung == 'a'){
        return 'a';
    }
    else {
        cout << "Keine gueltige Eingabe!"<< endl;
        return 'z';
    }
}
/** Überladener <<-Operator für Spielfeld-Markierungen */
std::ostream& operator<<(std::ostream& os, Spielfeld::Markierung markierung) {
    os << (char)markierung;
    return os;
}

/** Überladener <<-Operator für Spieler */
std::ostream& operator<<(std::ostream& os, Spielfeld::Spieler spieler) {
    os << (char)spieler;
    return os;
}



