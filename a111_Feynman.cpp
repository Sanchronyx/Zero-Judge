#include <iostream>
using namespace std;

int main(void){
    int num{0}, temp{0}, output{0};
    while (cin >> num){
        if (num == 0)break;
        temp = num;
        for (int i = 0; i < num; i++){
            output += temp * temp;
            temp--;
        }
        cout << output << endl;
        temp = 0, num = 0, output = 0;
    }
    return 0;
}