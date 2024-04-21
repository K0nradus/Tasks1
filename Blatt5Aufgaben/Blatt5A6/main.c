#include <stdio.h>
#include <string.h>
int main() {
    char zk[100], ovzk[100];
    int i, j = 0;
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk);
    for(i = 0; zk[i] != '\0'; i++){
        if (zk[i] != 'a' && zk[i] != 'e' && zk[i] != 'i' && zk[i] != 'o' && zk[i] != 'u' &&
            zk[i] != 'A' && zk[i] != 'E' && zk[i] != 'I' && zk[i] != 'O' && zk[i] != 'U') {
            ovzk[j] = zk[i];
            j++;
        }
    }
    zk[j] = '\0';
    printf("%s", ovzk);
}