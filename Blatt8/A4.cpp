#include <cstdio>
struct datum {
    int day;
    enum month {jan = 1, feb, mar, apr, may, jne, jly, aug, sep, oct, nov, dec};
    int year;
    month month;
};

int main() {
    struct datum date1 {
            date1.day = 7,
            date1.year = 2023,
            date1.month = datum::dec
    };
}