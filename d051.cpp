#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    double fahrenheit{0};
    double celsius{0};
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << fixed << setprecision(3) << celsius;
    return 0;
}