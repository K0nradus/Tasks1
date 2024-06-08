
#include <cstdio>
#include "stack.h"
int main(){
    char bracketString[100], Stack[100] = {'\0'};
    int validString = 0, counterPush = 0, counterPop = 0;
    char bracket;
    clear(Stack);
    printf("Bitte geben sie eine Kette mit nur diesen Zeichen ein: ( [ { } ] ):\n");
    scanf(" %s", bracketString);
    for(int i = 0; bracketString[i] != '\0';i++){
        if(bracketString[i] != '(' && bracketString[i] != '[' && bracketString[i] != '{'
           && bracketString[i] != ')' && bracketString[i] != ']' && bracketString[i] != '}'){
            validString++;
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
    if(validString != 0 || empty(bracketString)){
        printf("Keine guelitge Eingabe!");
    }else if(counterPop == counterPush){
        printf("Es handelt sich um eine ausgeglichene Klammerung!");
    }else{
        printf("Es handelt sich um keine ausgeglichene Klammerung!");
    }
}