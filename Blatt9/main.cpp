#include <iostream>
struct vector {
    float x;
    float y;
};

float skalarProdukt(const vector& a, const vector& b){
     return a.x * b.x + a.y *b.y;
}
vector vectorSum(const vector& a, const vector& b){
    struct vector vectorAdded = {a.x + b.x, a.y + b.y};
    return vectorAdded;
}
vector kreuzProdukt(const vector& a, const vector& b){
    struct vector crossVector = {a.x - b.y, b.x - a.y };
    return crossVector;
}
vector skalierterVector(float factor, const vector& b){
    struct vector vectorScaled = {b.x * factor, b.y * factor};
    return vectorScaled;
}
int main() {
    float factor = 2.0;
    struct vector vectorOne = {2.5, 2.7};
    struct vector vectorTwo = {3.8, 4.1};
    struct vector vectorAdded = vectorSum(vectorOne,vectorTwo);
    struct vector vectorScaled = skalierterVector(factor, vectorOne);
    struct vector crossVector = kreuzProdukt(vectorOne, vectorTwo);
    printf("Ihr Skalarprodukt lautet     : %lf\n", skalarProdukt(vectorOne,vectorTwo));
    printf("Ihr addierter Vektor lautet  : %f, %f\n", vectorAdded.x, vectorAdded.y);
    printf("Ihr Kreuzprodukt lautet      : %f, %f\n", crossVector.x, crossVector.y);
    printf("Ihr sklaierter Vektor lautet : %f, %f\n", vectorScaled.x, vectorScaled.y);
}
