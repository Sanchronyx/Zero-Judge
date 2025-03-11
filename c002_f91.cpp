#include <iostream>
using namespace std;

int f91(int num){
    if (num >= 101) {
        int output = num - 10;
        return output;
    }
    else if (num <= 100){
        return f91(f91(num+11));
    }
    return 0;
}

int main(void){
    int num{0};
    while (cin >> num){
        if (num == 0)break;
        int output = f91(num);
        cout << "f91(" << num << ")" << " = " << output << endl;
    }
    return 0;
}