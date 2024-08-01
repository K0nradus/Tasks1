#include <stdio.h>
#include <string.h>
int main() {
    char zk[100];
    int i = 0;
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk);
    while(zk[i] != '\0') {
        i++;
    }
    printf("%i und %i mit der Null\n", i, i+1);
    printf("%i", strlen(zk));
}
