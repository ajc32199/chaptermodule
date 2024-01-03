#include "personnel.h"

using namespace std;

void Personnel :: setAll(){
    cout << "enter name:\n";
    cin >> name;
    cout << "enter Active/Alumni/demitted status:\n";
    cin >> status;
    cout << "enter grade:\n";
    cin >> grade;
    cout << "enter age:\n";
    cin >> age;
}

void Personnel :: printAll(){
    cout << name << "\n" << status << "\n" << grade << "\n"
         << email << "\n" << age;
}