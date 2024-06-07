#include <iostream>
#include <string.h>
unsigned int size(char stack[100]){
    return strlen(stack);
}

bool empty(char stack[100]){
    if (stack[0] == '\0'){
        return true;
    }else {
        return false;
    }
}

char top(char stack[100]) {
    int lengthStack = 0;
        for (int i = 0; stack[i] != '\0'; i++) {
            lengthStack = i;
        }
        return stack[lengthStack];
}
void clear(char* stack) {
    stack[0] = '\0';
}

void push(char c, char stack[100]){
    for(int i = 0; i < strlen(stack) +1; i++){
        if(stack[i] == '\0'){
            stack[i] = c;
            stack[strlen(stack)+1] = '\0';
            break;
        }
    }
}

char pop(char stack[100]){
    int lengthStack = 0;
    char mostRecentElement;
    for(int i = 0; stack[i] != '\0'; i++){
        lengthStack = i;
    }
    mostRecentElement = stack[lengthStack];
    stack[lengthStack] = '\0';
    return mostRecentElement;
}
int main(){
    char a = 'a', b = 'b', c = 'c';
    char Stack[100] = {'\0'};
    push(a, Stack);
    push(b, Stack);
    push(c, Stack);
    //clear(Stack);
    if(empty(Stack)){
        printf("Der Stack ist leer!");
    } else {
        printf("Obersters Elemnt %c entfernt!\n", pop(Stack));
        printf("Oberstes Element = %c\n", top(Stack));
        printf("Groesse Stacks = %i", size(Stack));
    }
}