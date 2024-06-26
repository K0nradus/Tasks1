#include "safeArray.h"
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
    if(pos < 100){
        return array[pos];
    }else{
        return -1;
    }
}
bool safe_array::setAt(unsigned int pos, int val){
    if(pos < 100){
        array[pos] = val;
        return true;
    }else{
        return false;
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
