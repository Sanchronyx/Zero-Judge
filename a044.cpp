#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int num{0};
    while (cin >> num){
        num = (pow(num, 3) + (5 * num) + 6)/6;
        cout << num << endl;
    }   
    return 0;
}