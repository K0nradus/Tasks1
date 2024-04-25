#include <stdio.h>

int main() {
    int f1 = 1, f2 = 1, fn , i;
    for(i = 0; i < 20; i++){
        if(i <= 1) {
            fn = 1;
        } else {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
            printf("f_%i %d fq = %.15lf \n",i+1 , fn, (double) fn/f1);
        }
    }
}