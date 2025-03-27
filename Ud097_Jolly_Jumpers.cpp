#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>
using namespace std;

int main(void){
    int num{0};
    vector <int> arr;
    string str;
    while (getline(cin, str)){
        if (str.empty()) continue;
        stringstream ss(str);
        while (ss >> num){
            arr.push_back(num);
        }
        if (arr.size() <= 1){
            cout << "Jolly" << endl;
            continue;
        }
        set <int> differences;
        for (size_t i = 0; i < arr.size(); i++){
            differences.insert(abs(arr[i] - arr[i-1]));
        }

        if (differences.size() == arr.size() - 1) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}