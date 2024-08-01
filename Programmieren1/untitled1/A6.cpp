#include <iostream>
struct datum {
    int day;
    enum month {
        jan = 1, feb, mar, apr, may, jne, jly, aug, sep, oct, nov, dec
    };
    int year;
    month month;
};
bool bevor(const datum& a, const datum& b){
    int proof = 0;
    if(a.year < b.year){
        proof++;
    }
    if((a.year <= b.year) && (a.month < b.month)){
        proof++;
    }
    if((a.year <= b.year) && (a.month <= b.month) && (a.day < b.day)){
        proof++;
    }
    if(proof > 0 && proof <= 3){
        return true;
    }else {
        return false;
    }
}
int main() {
    struct datum date1{
            date1.day = 7,
            date1.year = 2022,
            date1.month = datum::may
    };
    struct datum date2 {
            date2.day = 7,
            date2.year = 2023,
            date2.month = datum::may
    };
    printf("%b",bevor(date1, date2));
}