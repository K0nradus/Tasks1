#include <stdio.h>
#include <math.h>
int main() {
    long double A, x0 = 1.0, xn;
    int i = 0;
    printf("Bitte geben sie eine Zahl ein! \n");
    scanf("%Lf", &A);
    do {
        xn = ((x0 + A/x0) / 2);
        if(fabs(xn - x0) <= 0.000001){
            printf("x%i = %.10Lf\n", i + 1, xn);
            break;
        }
        x0 = xn;
        i++;
        printf("x%i = %.10Lf\n", i, xn);
    } while (i < 100);

}

