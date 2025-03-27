#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    int num{0}, i{0};
    vector <int> arr(3);
    for (i = 0; i < 3; i++){
        cin >> num;
        arr[i] = num;
    }
    make_heap(arr.begin(), arr.end());
    sort_heap(arr.begin(), arr.end());
    cout << arr[2] << endl;
    return 0;
}