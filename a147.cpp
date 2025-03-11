#include <iostream>
using namespace std;

int main(void){
    int num{0};
    while (cin >> num){
        if (num == 0)break;
        for (int i = 1; i < num; i++){
            if (i % 7 == 0)continue;
            cout << i;
            if (i != num-1) cout << ' ';
        }
        cout << endl;
    }   
    return 0;
}