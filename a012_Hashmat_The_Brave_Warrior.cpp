#include <iostream>
using namespace std;

int main(void){
    long long int hashmot{0}, enemy{0};
    while (cin >> hashmot >> enemy){
        long long evaluation = abs(hashmot - enemy);
        cout << evaluation << endl;
    }
    return 0;
}