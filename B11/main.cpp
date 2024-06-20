#include <iostream>
#include "safeArray.h"
using namespace std;
int main(){
    safe_array testArray(2);
    cout <<testArray.getAt(40) << endl << testArray.setAt(99,1) << endl << testArray.getMin() << endl
         << testArray.fill(50, 90, 3) << endl << testArray.getAt(60)<< endl
         << testArray.setAt(100, 5) << endl << testArray.fill(90,50,6) ;
}
