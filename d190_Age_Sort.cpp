#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num{0};
    while (cin >> num){
        if (num == 0)break;
        vector <int> arr(num, 0);
        int n{0};
        for (int i = 0; i < num; i++){
            cin >> n;
            arr[i] = n;
        }
        make_heap(arr.begin(), arr.end());
        sort_heap(arr.begin(), arr.end());
        for (size_t i = 0; i < arr.size(); i++){
            cout << arr[i];
            if (i != arr.size() - 1)cout << " ";
        }
        cout << endl;
    }
    return 0;
}