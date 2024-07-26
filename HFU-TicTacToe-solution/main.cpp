#include <iostream>
#include <string>

#include "spielfeld.hh"

using namespace std;

bool zerlegeFeld(string eingabe, int& y, int& x){
    int index = 0;
    int counterUpperCharacter = 0;
    int counterNumber = 0;
    int counterLowerCharacter = 0;
    while(eingabe[index] != '\0'){
        if(('A' <= eingabe[index] && eingabe[index] <= 'C')){
            counterUpperCharacter++;
            x = eingabe[index] - 'A';
        } else if('1' <= eingabe[index] && eingabe[index] <= '3'){
            counterNumber++;
            y = eingabe[index] - '1';
        } else if('a' <= eingabe[index] && eingabe[index]<= 'c'){
            counterLowerCharacter++;
            x = eingabe[index] - 'a';
        }
        index++;
    }
    if(counterNumber != 1 || (counterLowerCharacter + counterUpperCharacter) != 1){
            return false;
        } else {
        return true;
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
    char zustimmung = 'y';
    int winsX = 0, winsO = 0;
    Spielfeld spielfeld;
    Spielfeld::Spieler aktuellerSpieler = Spielfeld::Spieler_X;
    /* Führe so lange fort, wie der Spielstand offen ist */
    while(spielfeld.weiterspielen(zustimmung)) {
        if(spielfeld.hatGewonnen()==Spielfeld::Gewinn_X){
            aktuellerSpieler = Spielfeld::Spieler_O;
        }
        else if(spielfeld.hatGewonnen()==Spielfeld::Gewinn_O){
            aktuellerSpieler = Spielfeld::Spieler_X;
        }
        else if(spielfeld.hatGewonnen()==Spielfeld::Unentschieden){
            aktuellerSpieler = Spielfeld::Spieler_X;
        }
        spielfeld = Spielfeld();
        while ((spielfeld.hatGewonnen()) == Spielfeld::Offen && spielfeld.weiterspielen(zustimmung)) {
            /* Zeige Spielfeld */
            spielfeld.zeige(cout);
            /* Zeige Spieler */
            cout << aktuellerSpieler << " ist am Zug!" << endl;
            /* Frage Feld ab */
            cout << "Waehle ein Feld! (z.B. A3)" << endl;
            string eingabe;
            getline(cin,eingabe);

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

        switch (spielfeld.hatGewonnen()) {
            case Spielfeld::Gewinn_X:
                spielfeld.zeige(cout);
                winsX++;
                cout << "X hat gewonnen!" << endl
                     << "X hat " << winsX << " Spiele gewonnen!" << endl
                     << "O hat " << winsO << " Spiele gewonnen!" << endl;
                break;
            case Spielfeld::Gewinn_O:
                spielfeld.zeige(cout);
                winsO++;
                cout << "O hat gewonnen!" << endl
                     << "O hat " << winsO << " Spiele gewonnen!" << endl
                     << "X hat " << winsX << " Spiele gewonnen!" << endl;
                break;
            case Spielfeld::Unentschieden:
                spielfeld.zeige(cout);
                cout << "Unentschieden!" << endl
                     << "X hat " << winsX << " Spiele gewonnen!" << endl
                     << "O hat " << winsO << " Spiele gewonnen!" << endl;
                break;
        }
        cout << "Wollt ihr noch ein Spiel spielen ? (y/n)" << endl;
        cin >> zustimmung;
    }
    return 0;
}