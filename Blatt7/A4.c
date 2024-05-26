#include <stdio.h>
long ggt(long x, long y){
   if(x == y){
       return x;
   } else if(x > y){
       return ggt(x-y, y);
   }else{
       return ggt(x, y-x);
   }
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