#include <stdio.h>

int hoch2(int n){
    return n * n;
}
int main(){
    int n;
    printf("Bitte geben sie eine Ganzzahl ein:\n");
    scanf("%d", &n);
    printf("Deine Quadratzahl ist %d.", hoch2(n));
    return 0;
}
