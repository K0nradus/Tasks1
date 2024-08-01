#include <stdio.h>
int berechne(char op, int v1, int v2) {
        switch (op) {
            case '+':
                return v1 + v2;
            case '*':
                return v1 * v2;
            case '-':
                return v1 - v2;
            case '/':
                return v1 / v2;
            default :
                return -999;
        }
    }



int main() {
    int z1, z2;
    char op;
    printf("Bitte geben sie eine Ganzzahl ein:\n");
    scanf("%d", &z1);
    printf("Bitte geben sie eine weitere Ganzzahl ein:\n");
    scanf("%d", &z2);
    printf("Bitte geben sie einen Rechenoperator ein:\n");
    scanf(" %c", &op);
    printf("%i", berechne(op,z1,z2));
}

