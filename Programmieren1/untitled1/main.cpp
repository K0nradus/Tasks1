#include <iostream>
struct datum {
    int day;
    enum month {jan = 1, feb, mar, apr, may, jne, jly, aug, sep, oct, nov, dec};
    int year;
    month month;
};
void druckeDatum(struct datum d){
    printf("Dein datum lautet %i %i %i\n", d.day, d.month, d.year);
}
void druckeDatum1(struct datum &d){
    printf("Dein datum lautet %i %i %i\n", d.day, d.month, d.year);
}
void druckeDatum2(struct datum* d){
    printf("Dein datum lautet %i %i %i", d->day, d->month, d->year);
}
int main() {
    struct datum date1 {
            date1.day = 7,
            date1.year = 2023,
            date1.month = datum::dec
    };
    druckeDatum(date1);
    druckeDatum1(date1);
    druckeDatum2(&date1);
}
