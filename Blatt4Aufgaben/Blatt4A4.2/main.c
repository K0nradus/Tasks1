#include <stdio.h>

int main() {
    double A, x0 = 1.0, xn;
    int i = 0;
    printf("Bitte geben sie eine Zahl ein! \n");
    scanf(" %lf", &A);
    do {
        xn = ((x0 + A/x0) / 2);
        x0 = xn;
        i++;
        printf("x%i = %lf\n", i, xn);

    } while (i < 20);

}

