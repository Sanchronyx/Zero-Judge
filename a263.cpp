#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isLeapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
    else return false;
}

int totalDays(string date){
    int year{}, month{}, day{}, i{};
    int daysMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalMonths{}, totalYears{};

    stringstream ss(date);
    ss >> year >> month >> day;

    if (isLeapYear(year)) daysMonth[1] = 29;

    for (i = 0; i < month - 1; i++){
        totalMonths += daysMonth[i];
    }

     for (i = 0; i < year; i++) {
        totalYears += 365 + (isLeapYear(i) ? 1 : 0);
    }

    int totalDate = totalYears + totalMonths + day;
    return totalDate;   
}

void dateCalculation(string firstDate, string secondDate){
    int firstTotalDays{totalDays(firstDate)};
    int secondTotalDays{totalDays(secondDate)};
    int daysDifference{abs(firstTotalDays - secondTotalDays)};
    cout << daysDifference << endl;
}

int main(void){
    string firstDate, secondDate;
    while (getline(cin>>ws, firstDate) && getline(cin>>ws, secondDate)){
        dateCalculation(firstDate, secondDate);
    }
    return 0;
}