#include <stdio.h>
#include <math.h>
void zp(int a, int b) {
    int zweipotenz[32] = {0};
    int h = 1, j = 0;
    if(a > b || (a < 0) || (b < 0) || (a == b)){
        h = 0;
    }else {
        for(int i = 0; i < 31; i++){
            zweipotenz[i] = pow(2,i);
        }
    }
    for(int i = 0; i < 31; i++){
        if(zweipotenz[i] >= a){
            j = i;
            break;
        }
    }
    for(; zweipotenz[j]>= a && zweipotenz[j] <= b;){
        printf("%d\n", zweipotenz[j]);
        j++;
    }
    if(h == 0){
        printf("Kein gueltiger Intervall!\n");
    }
}
int main() {
    int startI, endI;
    printf("Bitte geben sie den Start des Intervalls ein:\n");
    scanf("%d", &startI);
    printf("Bitte geben sie das Ende des Intervalls ein:\n");
    scanf("%d", &endI);
    zp(startI, endI);
}
