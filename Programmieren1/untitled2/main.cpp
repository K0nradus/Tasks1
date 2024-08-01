#include <iostream>
const char* sort( const char* s, char ch ){
    int sameCharacter= -1;
    for(int i = 0;s[i] != '\0';i++){
        if(s[i] == ch){
            sameCharacter = i;
        }
    }
    if(sameCharacter != -1){
    return &s[sameCharacter];
}
    else{
        return nullptr;
    }
}
int main() {
char s[] = {'a','b','c','d','a'};
    sort(s,'a');
    std::cout << sort(s,'a');
}
