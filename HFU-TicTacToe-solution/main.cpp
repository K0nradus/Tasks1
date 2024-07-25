#include <iostream>
#include <string>

#include "spielfeld.hh"

using namespace std;

bool zerlegeFeld(string eingabe, int& y, int& x) {
    /* Zulässiges Feld?
     * - Genau zwei Zeichen?
     * - Erstes Zeichen 'A' ... 'C'?
     * - Zweites Zeichen: '1' ... '3'?
     */
    if (eingabe.length()==2 &&
        ('A' <= eingabe[0] && eingabe[0] <= 'C') &&
        ('1' <= eingabe[1] && eingabe[1] <= '3')) {
        /* Koordinaten extrahieren */
        x = eingabe[0] - 'A';
        y = eingabe[1] - '1';
        return true;
    } else {
        return false;
    }
}

/* Anderen Spieler bestimmen für Spielerwechsel */
Spielfeld::Spieler andererSpieler(Spielfeld::Spieler spieler) {
    switch (spieler) {
        case Spielfeld::Spieler_X:
            return Spielfeld::Spieler_O;
        
        case Spielfeld::Spieler_O:
        default: /* Sollte nicht vorkommen, aber so gehen wir auf Nummer sicher */
            return Spielfeld::Spieler_X;
    }
}

int main() {
    Spielfeld spielfeld;
    Spielfeld::Spieler aktuellerSpieler = Spielfeld::Spieler_X;
    Spielfeld::Spielstand spielstand;
    /* Führe so lange fort, wie der Spielstand offen ist */
    while ((spielstand = spielfeld.spielstand()) == Spielfeld::Offen) {
        /* Zeige Spielfeld */
        spielfeld.zeige(cout);
        /* Zeige Spieler */
        cout << aktuellerSpieler << " ist am Zug!" << endl;
        /* Frage Feld ab */
        cout << "Waehle ein Feld! (z.B. A3)" << endl;
        string eingabe;
        getline(cin, eingabe);

        /* Prüfe Feld */
        int x, y;
        if (zerlegeFeld(eingabe, y, x)) {
            /* Zulässiges Feld => Prüfe, ob es leer ist*/
            if (spielfeld.feldIstLeer(y, x)) {
                /* Feld ist leer => Setze es und wechsle Spieler */
                spielfeld.setze(y, x, aktuellerSpieler);
                aktuellerSpieler = andererSpieler(aktuellerSpieler);
            } else {
                cout << "Dieses Feld ist schon belegt!" << endl;
                cout << "Versuche es noch einmal!" << endl;
            }
        } else {
            cout << "Ein Feld besteht aus einem Buchstaben (A-C) gefolgt von einer Ziffer (1-3)!" << endl;
            cout << "Versuche es noch einmal!" << endl;
        }
    }

    switch (spielstand) {
    case Spielfeld::Gewinn_X: cout << "X hat gewonnen!" << endl; break;
    case Spielfeld::Gewinn_O: cout << "O hat gewonnen!" << endl; break;
    case Spielfeld::Unentschieden: cout << "Unentschieden!" << endl; break;
    }
    return 0;
}