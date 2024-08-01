#include <iostream>
#include "safeArray.h"
using namespace std;
int main(){
    int arraySize = 10;
    safe_array testArray = safe_array(arraySize);
    cout << "Wert an getAt(5): " << testArray.getAt(5) << endl;
    testArray.printArray();
    testArray.setAt(9,3);
    testArray.printArray();
    testArray.setAt(11, 5);
    testArray.printArray();
    cout << "Wert an getAt(9): " << testArray.getAt(9) << endl;
    cout << "Wert an getAt(11): " << testArray.getAt(11) << endl << "Anzahl der default Werte im Array : " << testArray.length();
}
