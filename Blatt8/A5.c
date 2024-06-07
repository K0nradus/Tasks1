#include <stdio.h>
int vorkommen(const char* s, const char* m){
    int laengem = 0, counter = 0,  j =0, isreal= 0;
    for(int i = 0; m[i] != '\0'; i++){
        laengem++;
    }
    for(int i = 0; s[i] != '\0'; i++){
        for(j = 0; m[j] != '\0';j++){
            if (s[i+j] == m[j]){
                counter++;
            }
        }
        if(counter == laengem){
            isreal++;
        }
        counter = 0;
    }
    if(isreal != 0){
        return isreal;
    }else{
        return 0;
    }
}
int main() {
    char zk1[100], zk2[100];
    printf("Bitte geben Sie eine Zeichenkette ein: \n");
    gets(zk1);
    printf("Bitte geben Sie eine weitere Zeichenkette ein: \n");
    gets(zk2);
    printf("Ihre zweite Zeichenkette kommt %d mal vor!",vorkommen(zk1,zk2));
}