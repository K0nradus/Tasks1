#include <stdio.h>
long ggt(long x, long y){
    long r = 1;
    while(r != 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}






int main() {
    long x, y;
    printf("Bitte geben Sie eine ganze Zahl ein:\n");
    scanf("%d", &x);
    printf("Bitte geben Sie eine weitere ganze Zahl ein:\n");
    scanf("%d", &y);
    printf("Der ggt ist: %li", ggt(x,y));
    return 0;
}