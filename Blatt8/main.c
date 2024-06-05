#include <stdio.h>
#include <stdbool.h>

bool prim(int x){
    int y = 2;
    int divcounter = 0;
    for(int i = 0; i < 2147483647; i++){
        if(x % y == 0){
            divcounter++;
        }
        y++;
    }
    if(divcounter == 1){
        return true;
    } else {
        return false;
    }

}
int main() {
    int x;
    printf("Bitte geben Sie eine Zahl ein:\n");
    scanf("%d", &x);
    if(prim(x)){
        printf("Ihre Zahl ist prim :)");
    } else {
        printf("Ihre Zahl ist nicht prim :(");
    }
    return 0;
}
