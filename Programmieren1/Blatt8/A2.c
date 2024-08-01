#include <stdio.h>
struct Punkt {
    int x;
    int y;
};


int main() {
    struct Punkt p1 = {5, 6};
    struct Punkt p2 = {8, 9};
    int z = p1.x + p2.x;
    int a = p1.y + p2.y;
    struct Punkt p3 = {z, a};
    int b = p3.x;
    int c = p3.y;
    printf("Dein Punkt ist: %d | %d",b, c);
}