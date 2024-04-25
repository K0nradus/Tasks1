#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int rlist[100], dlist[51];
    int i, j, k = 0, mult = 0, m = 0, o;
    for(i = 0; i < 100; i++){
        rlist[i] = rand() % 51;
        printf("%i\t", rlist[i]);
        }
    printf("\n");
    for(j = 0; j < 100; j++){
        for (m = 0; m < 100; m++){
            if (rlist[m] == k){
                mult++;
            }
        }
        k++;
        dlist[j] = mult;
        mult = 0;
    }
    printf("\n");
    for(o = 0; o < 51; o++){
        printf("%i\t", dlist[o]);
    }
}