#include <iostream>
using namespace std;

void sign(int num){
    if (num > 0)cout << 1;
    else if (num < 0)cout << -1;
    else cout << 0;
}

int main(void){
    int num{0};
    cin >> num;
    sign(num);
    return 0;
}