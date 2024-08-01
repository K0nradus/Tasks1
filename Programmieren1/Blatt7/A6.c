#include <stdio.h>
#include <ctype.h>
#include <string.h>
void stat(const char* s, int* z, int* w) {
    int i = 0, j = 0, space = 0, realspace = 0;
    while (s[i] != '\0') {
        if (isspace(s[i]) != 0) {
            space++;
        }
        i++;
    }
    if (space == i) {
        *z = i - space;
        *w = i - space;
    } else {
        *z = i - space;
        while (s[j] != '\0') {
            if (isspace(s[j]) != 0 && (isspace(s[j + 1]) == 0 && s[j + 1] != '\0')) {
                realspace++;
            }
            j++;
        }
        *w = realspace + 1;
    }
}
int main() {
    char s[100];
    int zeichen,worte;
    printf("Bitte geben sie eine Zeichenkette ein.\n");
    gets(s);
    stat(s, &zeichen, &worte);
    printf("Zeichen = %i\nWoerter = %i", zeichen, worte);
    return 0;
}