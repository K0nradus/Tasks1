#include <stdio.h>
#include <string.h>
int main(void) {
    char zk1[100], zk2[100];
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk1);
    printf("Bitte geben sie eine zweite Zeichenkette ein:\n");
    gets(zk2);
    strcat(zk1, zk2);
    printf("%s", zk1);
    return  0;
}
