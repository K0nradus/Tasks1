#include <stdio.h>

int main() {
    int zahl, nz;
    int i;
    printf("Bitte geben sie eine ganze Zahl ein!\n");
    scanf(" %d", &zahl);
    if (zahl < 0) {
        printf("Bitte eine positive Zahl!");

    }
    while (zahl > 0){
        if (zahl % 2 == 0) {
            printf("0");
            nz = zahl / 2;
            zahl = nz;
        } else if (zahl % 2 == 1){
            printf("1");
            nz = zahl / 2;
            zahl = nz;
        }

    }
}