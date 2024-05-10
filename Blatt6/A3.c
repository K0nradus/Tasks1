#include <stdio.h>
#include <stdlib.h>
int main() {
    int z = 0;
    char *zk = (char *)malloc(200);
    printf("Geben sie eine Zeichenkette ein:\n");
    gets(zk);
    for(;*zk != '\0';){
        z++;
        zk++;
    }
    printf("Deine Zeichenkette ist %d Zeichen lang.", z);
}