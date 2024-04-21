#include <stdio.h>
#include <string.h>
int main() {
    char zk1[100], zk2[100];
    int i = 0, j = 0, k = 0, l = 0;
    printf("Bitte geben sie eine Zeichenkette ein:\n");
    gets(zk1);
    printf("Bitte geben sie eine weitere Zeichenkette ein:\n");
    gets(zk2);
    while(zk1[j] != '\0') {
        j++;
    }
    while(zk2[k] != '\0') {
        k++;
    }
    if(j >= k){
        while(zk1[i] != '\0') {
            if(zk1[i] == zk2[i]){
                i++;
            } else {
                printf("Die Ketten sind ungleich!");
                break;
            }
        }
    }
    if( k >= j){
        while(zk2[l] != '\0') {
            if(zk2[l] == zk1[l]){
                l++;
            }
            else {
                printf("Die Ketten sind ungleich!");
                break;
            }
        }
    }
    if(k == j){
        printf("Die Ketten sind gleich!");
    }
}

