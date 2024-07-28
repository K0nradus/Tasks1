#include <iostream>
#include <string>
#include <limits>
#include <vector>

#include "spielfeld.hh"

struct aiMove{
    int y;
    int x;
};
using namespace std;



int minimax(Spielfeld spielfeld, bool isMaximizing) {
    if (spielfeld.hatGewonnen() == Spielfeld::Gewinn_O) {
        return 10;
    }
    if (spielfeld.hatGewonnen() == Spielfeld::Gewinn_X) {
        return -10;
    }
    if (spielfeld.hatGewonnen() == Spielfeld::Unentschieden) {
        return 0;
    }
    if (isMaximizing) {
        int best = std::numeric_limits<int>::min();
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                if (spielfeld.belegung[y][x] == spielfeld.Leer) {
                    spielfeld.belegung[y][x] = spielfeld.Markierung_O;
                    best = max(best,minimax(spielfeld,false));
                    spielfeld.belegung[y][x] = spielfeld.Leer;
                }
            }
        }
        return best;
    }
   else{
       int best = std::numeric_limits<int>::max();
       for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                if (spielfeld.belegung[y][x] == spielfeld.Leer) {
                    spielfeld.belegung[y][x] = spielfeld.Markierung_X;
                    best = min( best,minimax(spielfeld,true));
                    spielfeld.belegung[y][x] = Spielfeld::Leer;
                }
            }
        }
        return best;
   }
}


aiMove findBestMove(Spielfeld spielfeld){
    int bestVal = std::numeric_limits<int>::min();
    aiMove bestMove;
    bestMove.y = -1;
    bestMove.x = -1;
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            if (spielfeld.belegung[y][x] == spielfeld.Leer) {
                spielfeld.belegung[y][x] = spielfeld.Markierung_O;
                int moveVal = minimax(spielfeld,false);
                spielfeld.belegung[y][x] = spielfeld.Leer;
                if(moveVal > bestVal){
                    bestMove.y = y;
                    bestMove.x = x;
                    bestVal = moveVal;
                }
            }
        }
    }
    return bestMove;
}
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
    int winsX = 0, winsO = 0;
    Spielfeld spielfeld;
    Spielfeld::Spieler aktuellerSpieler = Spielfeld::Spieler_X;
     char zustimmungAi;
     char zustimmungLoop = 'y';
     cout << "Wollt ihr ein Spiel gegen Menschen oder  AI spielen ? (h/a)" << endl;
        cin >> zustimmungAi;
        if (zustimmungAi != 'a' && zustimmungAi != 'h') {
            while (zustimmungAi != 'a' && zustimmungAi != 'h') {
                cout << "Keine gueltige Eingabe! Versuche es erneut!" << endl;
                cin >> zustimmungAi;
            }
        }
    /* Führe so lange fort, wie der Spielstand offen ist */
    while(spielfeld.weiterspielen(zustimmungLoop)== 'y') {
        if(zustimmungAi == 'a'){
            aktuellerSpieler = Spielfeld::Spieler_X;
        }
        if(spielfeld.hatGewonnen()==Spielfeld::Gewinn_X && zustimmungAi == 'h'){
            aktuellerSpieler = Spielfeld::Spieler_O;
        }
        else if(spielfeld.hatGewonnen()==Spielfeld::Gewinn_O && zustimmungAi == 'h'){
            aktuellerSpieler = Spielfeld::Spieler_X;
        }
        else if(spielfeld.hatGewonnen()==Spielfeld::Unentschieden){
            aktuellerSpieler = Spielfeld::Spieler_X;
        }
        spielfeld = Spielfeld();
        while ((spielfeld.hatGewonnen()) == Spielfeld::Offen &&
                spielfeld.weiterspielen(zustimmungAi)== 'a' &&
                spielfeld.weiterspielen(zustimmungLoop) == 'y')  {
            if(aktuellerSpieler == Spielfeld::Spieler_X) {
                /* Zeige Spielfeld */
                spielfeld.zeige(cout);
                /* Zeige Spieler */
                cout << aktuellerSpieler << " ist am Zug!" << endl;
                /* Frage Feld ab */
                cout << "Waehle ein Feld! (z.B. A3)" << endl;
                string eingabe;
                cin >> eingabe;

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
            else {
            aiMove bestMove = findBestMove(spielfeld);
            spielfeld.setze(bestMove.y,bestMove.x,Spielfeld::Spieler_O);
                aktuellerSpieler = andererSpieler(aktuellerSpieler);
            }
        }


        while ((spielfeld.hatGewonnen()) == Spielfeld::Offen &&
                spielfeld.weiterspielen(zustimmungAi)== 'h'&&
                spielfeld.weiterspielen(zustimmungLoop) == 'y'){
            /* Zeige Spielfeld */
            spielfeld.zeige(cout);
            /* Zeige Spieler */
            cout << aktuellerSpieler << " ist am Zug!" << endl;
            /* Frage Feld ab */
            cout << "Waehle ein Feld! (z.B. A3)" << endl;
            string eingabe;
           cin >> eingabe;

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
     cout << "Wollt ihr nochmal spielen? (y/n)" << endl;
        cin >> zustimmungLoop;
    }
    return 0;
}
