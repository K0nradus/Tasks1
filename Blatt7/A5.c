#include <stdio.h>
#include <ctype.h>
#include <string.h>
void stat(const char* s) {
    int i = 0, j = 0, space = 0, realspace = 0;
    while (s[i] != '\0') {
        if (isspace(s[i]) != 0) {
            space++;
        }
        i++;
    }
    if (space == i) {
        printf("Anzahl der Zeichen = %i Anzahl der Worte = %i\n", space - i, i - space);
    } else {
        printf("Anzahl der Zeichen = %i\n", i - space);
        while (s[j] != '\0') {
            if (isspace(s[j]) != 0 && (isspace(s[j + 1]) == 0 && s[j + 1] != '\0')) {
                realspace++;
            }
            j++;
        }
        printf("Anzahl der Woerter = %i", realspace + 1);
    }
}


int main() {
    char s[100];
    printf("Bitte geben sie eine Zeichenkette ein.\n");
    gets(s);
    stat(s);
    return 0;
}