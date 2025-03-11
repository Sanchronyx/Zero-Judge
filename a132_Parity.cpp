#include <iostream>
using namespace std;

const long long int MAX{30};

void paritizer(long long int digit){
    long long int output[MAX] = {};
    int i = 0;
    while (digit != 0){
        output[i++] = digit % 2;
        digit /= 2;
    }

    int count_parity{0};
    for (int j = 0; j < i; j++){
        if (output[j] == 1)count_parity++;
    }

    cout << "The parity of ";
    for (int j = i-1; j >= 0; j--){
        cout << output[j];
    }
    cout << " is " << count_parity << " (mod 2)." << endl;
}

int main(void){
    long long int num{0};
    while (cin >> num){
        if (num == 0)break;
        paritizer(num);
    }
    return 0;
}