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
void clear(char stack[100]) {
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
    char bracketString[100], Stack[100] = {'\0'};
    int proofCounterString = 0, i = 0,counterPush = 0, counterPop = 0;
    char bracket;
    clear(Stack);
    printf("Bitte geben sie eine Kette mit nur diesen Zeichen ein: ( [ { } ] ):\n");
    gets(bracketString);
    for(; bracketString[i] != '\0';i++){
        if(bracketString[i] != '(' && bracketString[i] != '[' && bracketString[i] != '{'
        && bracketString[i] != ')' && bracketString[i] != ']' && bracketString[i] != '}'){
            proofCounterString++;
        }else if(bracketString[i] == '(' || bracketString[i] == '[' || bracketString[i] == '{'){
            bracket = bracketString[i];
            push(bracket, Stack);
            counterPush++;
        }else if(bracketString[i] == ')'){
            if(top(Stack) == bracketString[i]-1){
                pop(Stack);
                counterPop++;
            }
        } else if(bracketString[i] == ']' || bracketString[i] == '}'){
            if(top(Stack) == bracketString[i]-2){
                pop(Stack);
                counterPop++;
            }
        }
    }
    if(proofCounterString != 0 || empty(bracketString)){
        printf("Keine guelitge Eingabe!");
    }else if(counterPop == counterPush){
        printf("Es handelt sich um eine ausgeglichene Klammerung!");
    }else{
        printf("Es handelt sich um keine ausgeglichene Klammerung!");
    }
}
