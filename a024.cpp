#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int num1{0}, num2{0};
    cin >> num1 >> num2;
    cout << __gcd(num1, num2);
    return 0;
}