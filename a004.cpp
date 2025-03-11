#include <iostream>
#include <string>
using namespace std;

void leapYear(int year){
    string leap_year = "閏年";
    string regular_year = "平年";
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))cout << leap_year << endl;
    else cout << regular_year << endl;
}

int main(void){
    int year{};
    while (cin>>year){
        leapYear(year);
    }
    return 0;
}