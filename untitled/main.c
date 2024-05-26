
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int i=0,x=5;
    for (int z=0; z<15;z++) {
        while (1) {
            i++;
            x = rand();
            if (x == 0) {
                printf("\n%i", i);
                break;
            }
            else continue;
        }
    }
    return 0;
}