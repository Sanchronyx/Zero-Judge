#include <iostream>
using namespace std;

void divination(int month, int day){
    int revelation {(month * 2 + day) % 3};
    if (revelation == 0)cout << "普通" << endl;
    else if (revelation == 1)cout << "吉" << endl;
    else if (revelation == 2)cout << "大吉" << endl;
}

int main(void){
    int month{}, day{};
    cin >> month;
    cin >> day;
    divination (month, day);
    return 0;
}