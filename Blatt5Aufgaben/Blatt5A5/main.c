#include <stdio.h>
#include <string.h>
int main() {
    char zk[100], rzk[100];
    char i, j = 0;
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk);
    for(i = 0; i <= strlen(zk); i++){
        rzk[i] = zk[strlen(zk) -(i + 1)];
    }
    printf("Deine Zeichenkette war: %s\n", zk);
    printf("Dein Palyndrom ist: %s\n", rzk);
}
