#include <stdio.h>
#include <string.h>
int main(void) {
    int j = 0;
    char zk1[100], zk2[100], zkcat[100];
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk1);
    printf("Bitte geben sie eine zweite Zeichenkette ein:\n");
    gets(zk2);
    for(int i = 0; zk1[i] != '\0'; i++){
        j++;
    }
   for(int i = 0; zk2[i] != '\0'; i++){
       zk1[j] = zk2[i];
       j++;
   }
    printf("%s", zk1);
   return 0;
}