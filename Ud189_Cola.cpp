#include <iostream>
using namespace std;

int main(void){
    int cola{0}, count{0}, temp{0};
    while (cin >> cola){
        while (cola > 0){
            count += cola;
            temp += 1;
            cola /= 3;
        }
        cout << count << endl;
    }
    return 0;
}