#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 4){
        return -1;
    }
    int n = atoi(argv[2]);
    int m = atoi(argv[3]);
    switch (argv[1][0]) {
        case '+':
            printf("Ergebnis: %i\n", n + m);
            break;
        case 'x':
            printf("Ergebnis: %i\n", n * m);
            break;
        case '-':
            printf("Ergebnis: %i\n", n - m);
            break;
        case '/':
            printf("Ergebnis: %i\n", n / m);
            break;
        default :
            printf("Error!");
    }
}