#ifndef SPIELFELD_HH
#define SPIELFELD_HH

#include <iostream> /* für std::ostream */

class Spielfeld {
public:
    struct AiMove{
        int y;
        int x;
        int bestScore;
    };
    enum Markierung {
        Leer = '.',
        Markierung_X = 'X',
        Markierung_O = 'O'
    };

    enum Spieler {
        Spieler_X = Markierung_X,
        Spieler_O = Markierung_O
    };

    enum Spielstand {
        Offen,
        Unentschieden,
        Gewinn_X,
        Gewinn_O
    };

    /** Konstruktor: Initialisiere das Spielfeld */
    Spielfeld();

    /** Methode: Gebe das Spielfeld auf den Ausgabe-Stream os aus. */
    void zeige(std::ostream& os);

    /** Prüfe, ob das angegebene Feld leer ist */
    bool feldIstLeer(int y, int x) { return belegung[y][x] == Leer; }

    /** Setze ein Feld */
    void setze(int y, int x, Spieler spieler);

    /** Prüfe, ob es einen Gewinner gibt */
    Spielstand hatGewonnen();
    /**Pruefe ob weitergespielt werden soll*/
    char weiterspielen(char Zustimmung);
    Markierung belegung[3][3];
private:
    /** Belegung des Spielfelds
     * belegung[y][x]: Zeile y, Spalte x
     */


    /** Prüfe, ob der angegebene Spieler gewonnen hat */


    /** Prüfe, ob der gegebene Spieler die ganze Reihe belegt hat */

    /** Prüfe, ob der gegebene Spieler die ganze Spalte belegt hat */


    /** Prüfe, ob alle Felder belegt sind */
    bool alleFelderBelegt();
};

/** Überladener <<-Operator für Spielfeld-Markierungen */
std::ostream& operator<<(std::ostream& os, Spielfeld::Markierung markierung);

/** Überladener <<-Operator für Spieler */
std::ostream& operator<<(std::ostream& os, Spielfeld::Spieler spieler);

#endif /* SPIELFELD_HH */
