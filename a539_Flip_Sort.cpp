#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num{0};
    while (cin >> num){
        vector <int> arr(num, 0);
        for (int i = 0; i < num; i++){
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < num-1; i++){
            for (int j = 0; j < num - i - 1; j++){
                if (arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    count++;
                }
            }
        }
        cout << "Minimum exchange operations : " << count << endl;
    }
    return 0;
}