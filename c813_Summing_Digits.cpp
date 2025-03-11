#include <iostream>
using namespace std;

void gn_function(int num){
    int sum{0};
    while (num > 0){
        sum += num % 10;
        num /= 10;
        if (num == 0 && sum > 9) {
            num = sum;
            sum = 0;
        }
    }
    cout << sum << endl;
}

int main(void){
    int num{0};
    while (cin >> num){
        if (num == 0)break;
        gn_function(num);
    }
    return 0;
}