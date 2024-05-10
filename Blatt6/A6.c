#include <stdio.h>
#include <string.h>
void dreh(const char* s) {
    char rs[100];
    int i;
    for (i = 0; s[i] != '\0'; i++){
        rs[i] = s[strlen(s) - (i + 1)];
    }
    rs[i] = '\0';
    printf("Deine umgekehrte Zeichenkette is: %s",rs);
}
int main(){
    char s[100];
    printf("Bitte geben Sie eine Zeichenkette ein:\n");
    gets(s);
    dreh(s);
    return 0;
}
