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

Spielfeld::Spielstand Spielfeld::spielstand() {
    if (hatGewonnen(Spieler_O)) {
        return Gewinn_O;
    } else if (hatGewonnen(Spieler_X)) {
        return Gewinn_X;
    } else if (alleFelderBelegt()) {
        return Unentschieden;
    } else {
        return Offen;
    }
}

bool Spielfeld::hatGewonnen(Spieler spieler) {
    /* Prüfe auf vollständige Reihe */
    for (int y = 0; y < 3; y++) {
        if (ganzeReihe(y, spieler)) {
            return true;
        }
    }
    /* Prüfe auf vollständige Spalte */
    for (int x = 0; x < 3; x++) {
        if (ganzeSpalte(x, spieler)) {
            return true;
        }
    }

    /* Prüfe erste Diagonale */
    if (belegung[0][0] == (Markierung)spieler &&
        belegung[1][1] == (Markierung)spieler &&
        belegung[2][2] == (Markierung)spieler) {
        return true;
    }

    /* Prüfe zweite Diagonale */
    if (belegung[2][0] == (Markierung)spieler &&
        belegung[1][1] == (Markierung)spieler &&
        belegung[0][2] == (Markierung)spieler) {
        return true;
    }

    /* Die Markierung hat noch nicht gewonnen */
    return false;
}

bool Spielfeld::ganzeReihe(int y, Spieler spieler) {
    for (int x = 0; x < 3; x++) {
        if (belegung[y][x] != (Markierung)spieler) {
            return false;
        }
    }

    return true;
}

bool Spielfeld::ganzeSpalte(int x, Spieler spieler) {
    for (int y = 0; y < 3; y++) {
        if (belegung[y][x] != (Markierung)spieler) {
            return false;
        }
    }

    return true;
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
