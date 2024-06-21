#include "safeArray.h"

void safe_array::initialize() {
        array = new int[arraySize];
        for (int i = 0; i < arraySize; i++) {
            array[i] = defaultValue;
        }
        isInitialized = true;
}
void safe_array::arrayEnlarger(unsigned int newsize){
    safe_array EnlargedArray = safe_array(newsize);
    for(int i = 0; i < arraySize;i++){
        if(array[i] != defaultValue){
            EnlargedArray.setAt(i,array[i]);
        }
    }
    array = EnlargedArray.array;
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
    if(!isInitialized){
        initialize();
    }
    if(pos < arraySize){
        return array[pos];
    }else{
        arrayEnlarger(pos);
        return array[pos];
    }
}

void safe_array::setAt(unsigned int pos, int val){
    if(!isInitialized){
        initialize();
    }
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
