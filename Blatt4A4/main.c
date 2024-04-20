#include <stdio.h>

int main() {
    double A, x0 = 1.0, xn;
    int i;
    printf("Bitte geben sie eine Zahl ein! \n");
    scanf(" %lf", &A);
    for(i = 0; i < 10; i++) {
        xn = ((x0 + A/x0) / 2);
        x0 = xn;
        printf("x%i = %lf\n", i+1, xn);

    }
}
