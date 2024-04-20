#include <stdio.h>

int main() {
    int pruefen;
    int wert[13];
    int r;
    int summe = 0;
    char EAN[14] = {'a'};
    printf("bitte geben sie 13 ziffern von 0 bis 9 ein\n");
    scanf(" %s", EAN);
    for (pruefen = 0; EAN[pruefen] != '\0'; pruefen++) {
        wert[pruefen] = EAN[pruefen] - '0';
    }
    if (pruefen != 13) {
        printf("Keine gueltige Zahl!");
    } else {
        for (r = 0; r < 13; r++) {
            if ((r % 2) == 0) {
                summe += wert[r] * 1;

            } else {
                summe += wert[r] * 3;
            }
        }if (summe % 10 == 0) {
            printf("Gueltige EAN!");
        } else {
            printf("Keine gueltige EAN!");
        }
    }


}