#include <iostream>
#include <string.h>
using namespace std;
struct datum{
    int day;
    enum month {jan = 1, feb, mar, apr, may, jne, jly, aug, sept, oct, nov, dec};
    int year;
    month month;
};
struct person {
    char name[50];
    char vorname[50];
    datum birthday;
};
void findBirthdate(const char* vn, const char* n, int pz){
    struct person importantPerson[50];
    int proofCounter = 0;
    importantPerson[0] = {"Einstein","Albert",14, 1879, datum::mar};
    importantPerson[1] = {"Newton","Isaac",25, 1643, datum::dec};
    importantPerson[2] = {"Leibniz","Gottfried",21, 1646, datum::jne};
    importantPerson[3] = {"Bach","Sebastian",21, 1685, datum::mar};
    importantPerson[4] = {"Mozart","Amadeus",27, 1756, datum::jan};
    for(int i = 0; i < pz ;i++){
        if(strcmp(vn, importantPerson[i].vorname) == 0 && strcmp(n, importantPerson[i].name)== 0) {
            cout << importantPerson[i].vorname << " " << importantPerson[i].name << " wurde am "
                 << importantPerson[i].birthday.day
                 << "." << importantPerson[i].birthday.month << "." << importantPerson[i].birthday.year << " geboren." << endl;
        }
        else{
            proofCounter++;
        }
    }
    if(proofCounter != 4){
        cout << "Keine passende Person gefunden!";
    }

}
int main() {
    int personCount = 5;
    char nameInput[50];
    char vornameInput[50];
    cout << "Vorname und Nachname eingeben:\n";
    cin >> vornameInput >> nameInput;
    findBirthdate(vornameInput,nameInput,personCount);
}



