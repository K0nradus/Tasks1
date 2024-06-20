#ifndef B11_SAFEARRAY_H
#define B11_SAFEARRAY_H
class safe_array{
    int array[100];
public:
    bool setAt(unsigned int,int);
    int getAt(unsigned int);
    int getMin();
    bool fill(unsigned int,unsigned int, int);
    safe_array(int n){
        for(int i = 0; i < 10; i++){
            array[i] = n;
        }
    }
};
#endif //B11_SAFEARRAY_H
