#include "safeArray.h"
#include "iostream"
using namespace std;
void safe_array::printArray() {
        for (int i = 0;i < arraySize;i++){
            cout << array[i] << endl;
        }
    }

void safe_array::arrayEnlarger(unsigned int newsize){
    int *tempArray= new int[newsize];
    for(int i = 0; i < newsize; i++){
        tempArray[i] = defaultValue;
    }
     for(int i = 0; i < arraySize;i++){
         if(array[i] != defaultValue){
             tempArray[i] = array[i];
         }
     }
     delete[] array;
     array = tempArray;
     arraySize = newsize;
}

unsigned int safe_array::length() {
    unsigned int isdefault = 0;
    for(int i = 0; i < arraySize;i++){
        if(array[i] == defaultValue){
            isdefault++;
        }
    }
    return isdefault;
}

bool safe_array::fill(unsigned int pos1, unsigned int pos2, int value){
    if(pos1 <= pos2 && pos2 < 100){
        for(;pos1 <= pos2; pos1++){
            array[pos1] = value;
        }
        return true;
    }else{
        return false;
    }

}

int safe_array::getAt(unsigned int pos){

    if(pos < arraySize){
        return array[pos];
    }else{
        arrayEnlarger(pos);
        return array[pos];
    }
}

void safe_array::setAt(unsigned int pos, int val){
    if(pos < arraySize){
        array[pos] = val;
    }else{
        arrayEnlarger(pos+1);
        array[pos] = val;
    }
}
int safe_array::getMin() {
    int min = array[0];
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if( array[i] < array[j+1]){
                min = array[i];
            }
        }
    }
    return min;
}