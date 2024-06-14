#ifndef b10a3to6_safearray_h
#define b10a3to6_safearray_h
class safe_array{
    int array[100];
public:
    bool setAt(unsigned int,int);
    int getAt(unsigned int);
    int getMin();
    bool fill(unsigned int,unsigned int, int);
    safe_array(int n){
        for(int i = 0; i < 100; i++){
            array[i] = n;
        }
    }
};
/*safe_array::safe_array(int n) {
   for(int i = 0; i < 100; i++){
       array[i] = n;
   }
}*/
#endif //B10A3TO6_SAFEARRAY_H
