#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Punkt {
    int x;
    int y;
};
int main() {
    srand(time);
    struct Punkt randomnum[50];
    for(int i = 0; i < 50; i++){
        randomnum[i].x = rand() % 50;
        randomnum[i].y = rand() % 50;
        printf("%d\n", randomnum[i].x);
    }
    int minx = randomnum[0].x, miny = randomnum[0].y, posx, posy;
    for(int i = 0; i < 50; i++){
        if(randomnum[i].x < minx){
            minx = randomnum[i].x;
            posx = i;
        }
    }
    for(int i = 0; i < 50; i++){
        if(randomnum[i].y < miny){
            miny = randomnum[i].y;
            posy = i;
        }
    }
    printf("minpos = %i minx = %d\n",posx, minx);
    printf("minpos = %i minx = %d\n",posy, miny);
}