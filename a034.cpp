#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num{0};
    while (cin >> num){
        vector <int> output;
        if (num == 0){
            cout << num << endl;
            continue;
        }
        while (num > 0){
            output.push_back(num % 2);
            num /= 2;
        }
        for (int i = output.size() - 1; i >= 0; i--){
            cout << output[i];
        }
        cout << endl;
    }
    return 0;
}