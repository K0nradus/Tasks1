#include <iostream>
using namespace std;
void sort(int *a, unsigned int n){
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n - 1;j++){
        if(a[j] > a[j+1]){
            int tempSort = a[j];
            a[j] = a[j+1];
            a[j+1] = tempSort;
        }
    }
}
}
int main(){
    int array[] = {15, 7, 13, 24,9, 25};
    int n = 6;
    sort(array,n);
    for(int i = 0; i < n;i++){
        cout << array[i] << endl;
    }
}