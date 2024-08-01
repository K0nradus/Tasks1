#include <stdio.h>
#include <string.h>
int main() {
    char zk1[100], zk2[100];
    int i = 0, j = 0, k = 0, l = 0, m = 1;
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk1);
    printf("Bitte geben sie eine weitere Zeichenkette ein:\n");
    gets(zk2);
    while (zk1[j] != '\0') {
        j++;
    }
    while (zk2[k] != '\0') {
        k++;
    }
    if (k == j) {
        while (zk1[i] != '\0') {
            if (zk1[i] == zk2[i]) {
                i++;
            }
            if (zk1[i] != zk2[i]) {
                m = 0;
                break;
            }
        }
    }
    if (m == 1) {
        printf("Die Ketten sind gleich!");
    } else {
        printf("Die Ketten sind ungleich!");
    }
}