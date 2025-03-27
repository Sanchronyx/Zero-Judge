#include <iostream>
using namespace std;

int main(void){
    int cola{0};
    while (cin >> cola){
        int count{0};
        while (cola > 0){
            count += cola;
            cola /= 3;
        }
        cout << count << endl;
    }
    return 0;
}