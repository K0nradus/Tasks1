#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    unsigned long long rlist[20];
    int i, j;
    unsigned long long sum_even = 0, sum_odd = 0;
    for(i = 0; i < 20; i++){
        rlist[i] = rand();
        printf("%d\n", rlist[i]);
    }
    for(j = 0; j < 20; j++){
        if (rlist[j] % 2 == 0) {
            sum_even = sum_even + rlist[j];

        } else {
            sum_odd = sum_odd + rlist[j];
        }


    }
    printf("Gerade Zahlen aufaddiert ergibt: %llu\n", sum_even);
    printf("Ungerade Zahlen aufaddiert ergibt: %llu ", sum_odd);

}
