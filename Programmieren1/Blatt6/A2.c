#include <stdio.h>
int main(void) {
    int m = 9;
    int n = 10;
    int h;
    int *pm;
    int *pn;
    pm = &m;
    pn = &n;
    h = *pm;
    *pm = *pn;
    *pn = h;
    printf("m = %i, n = %i.", m, n);
    return 0;
}