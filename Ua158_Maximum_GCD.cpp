#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <string>
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

void find_GCD(string input){
    stringstream ss(input);
    vector <int> arr;
    int num{0};
    while (ss >> num){
        arr.push_back(num);
    }
    int current_gcd{0}, max_gcd{0};
    for (size_t j = 0; j < arr.size(); j++){
        for (size_t k = j+1; k < arr.size(); k++){
            // current_gcd = __gcd(arr[j], arr[k]);
            if (current_gcd > max_gcd)max_gcd = current_gcd;
        }
    }
    cout << max_gcd << endl;
}

int main(void){
    fastIO;
    int times{0};
    cin >> times;
    cin.ignore();
    while (times--){
        string input;
        getline(cin>>ws, input);
        find_GCD(input);
    }
    return 0;
}