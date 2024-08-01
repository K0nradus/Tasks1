#ifndef B11_SAFEARRAY_H
#define B11_SAFEARRAY_H
class safe_array{
    int *array;
    const int defaultValue = 2;
    unsigned int arraySize;
public:
    void arrayEnlarger(unsigned int newsize);

    unsigned int length();

    void setAt(unsigned int pos,int value);

    int getAt(unsigned int);

    int getMin();

    bool fill(unsigned int,unsigned int, int);

    void printArray();

    safe_array(unsigned int arraySize){
        this->arraySize = arraySize;
        array = new int[arraySize];
        for(int i = 0; i < arraySize; i++){
            array[i] = defaultValue;
        }
    }
};
#endif //B11_SAFEARRAY_H
