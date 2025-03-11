#include <iostream>
#include <vector>
using namespace std;

void solve(vector <int> &arr){
    int ans = arr[0], max_val = arr[0];
    for (size_t i = 1; i < arr.size(); i++){
        cout << arr[i] << "**" << endl;
        max_val = max(max_val + arr[i], arr[i]);
        ans = max(ans, max_val);
    }
    cout << ans << endl;
}

int main(void){
    int cases{0};
    cin >> cases;
    while (cases--){
        vector <int> arr;
        int input{0};
        while (cin >> input){
            if (input == 0)break;
            arr.push_back(input);
        }
        solve(arr);
    }
    return 0;
}