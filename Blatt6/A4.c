#include <stdio.h>
#include <stdlib.h>

int main() {
    long *fz;
    fz = (long *)malloc(50 * sizeof(long ));
    long f1 = 0, f2 = 1;
    for(int i = 0; i < 50; i++){
            *fz = f1 + f2;
            f2 = f1;
            f1 = *fz;
            printf("f(%d) = %li\n", i, *fz);
            fz++;
        }
    return 0;
    }

