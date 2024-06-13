#include "stack.h"
#include <cstring>
#include <cstdio>

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
    if(empty(stack)){
        return -1;
    }else {
        for (int i = 0; stack[i] != '\0'; i++) {
            lengthStack = i;
        }
        return stack[lengthStack];
    }
}
void clear(char stack[100]) {
    stack[0] = '\0';
}

void push(char c, char stack[100]){
    if(size(stack) == 99){
        printf("Der Stack ist Voll!");
    }else {
        for (int i = 0; i < strlen(stack) + 1; i++) {
            if (stack[i] == '\0') {
                stack[i] = c;
                stack[strlen(stack) + 1] = '\0';
                break;
            }
        }
    }
}

char pop(char stack[100]){
    int lengthStack = 0;
    char mostRecentElement;
    if(empty(stack)){
        printf("Der Stack ist leer! Es macht keinen Sinn zu poppen");
        return 'n';
    }else {
        for (int i = 0; stack[i] != '\0'; i++) {
            lengthStack = i;
        }
        mostRecentElement = stack[lengthStack];
        stack[lengthStack] = '\0';
        return mostRecentElement;
    }
}