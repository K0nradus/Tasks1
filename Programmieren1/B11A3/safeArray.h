#ifndef B11_SAFEARRAY_H
#define B11_SAFEARRAY_H
class safe_array{
    int *array;
    const int defaultValue = 2;
    unsigned int arraySize;
    bool isInitialized = false;
public:
    void initialize();

    void arrayEnlarger(unsigned int newsize);

    unsigned int length();

    void setAt(unsigned int pos,int value);

    int getAt(unsigned int);

    int getMin();

    bool fill(unsigned int,unsigned int, int);

    safe_array(unsigned int arraySize){
        this->arraySize = arraySize;
    }
};
#endif //B11_SAFEARRAY_H


