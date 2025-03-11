#include <iostream>
#include <vector>
using namespace std;

int main(void){
    long long int num{0};
    cin >> num;
    if (num == 0){
        cout << 0;
        return 0;
    }
    bool zero = true;
    while (num > 0){
        int val = num % 10;
        if (zero == false || val != 0){
            cout << val;
            zero = false;
        }
        num /= 10;
    }
    return 0;
}


