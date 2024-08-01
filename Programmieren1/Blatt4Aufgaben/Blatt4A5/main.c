#include <stdio.h>
int main ( ) {
    int zahlen[5];
    int i, j;
    for (i = 20 ;i > 15 ;i = i - 1){
        zahlen[20-i] = i % 3;
         }
    for (i = 0 ;i < 5 ;i = i + 1){
        for (j = 5 ; j > 0 ; j = j - 2){
            zahlen[5-j] = zahlen [i/2] + zahlen[j-1];
        }
    }
    return 0;
}