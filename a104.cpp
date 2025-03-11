#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num{0};
    while (cin >> num){
        vector <int> arr(num, 0);
        int val{0};
        for (int i = 0; i < num; i++){
            cin >> val;
            arr[i] = val;
        }
        for (int i = 0; i < num - 1; i++){
            for (int j = 0; j < num - i - 1; j++){
                if (arr[j] > arr[j+1])swap(arr[j], arr[j+1]);
            }
        }
        for (int i = 0; i < num; i++){
            cout << arr[i];
            if (i != num-1)cout << " ";
        }
        cout << endl;
    }
    return 0;
}