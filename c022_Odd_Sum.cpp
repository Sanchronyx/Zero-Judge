#include <iostream>
using namespace std;

int main(void){
    int cases{0}, count{1};
    cin >> cases;
    while (cases--){
        int val1{0}, val2{0}, ans{0};
        cin >> val1 >> val2;
        for (int j = val1; j <= val2; j++){
            if (j % 2 != 0)ans += j;
        }
        cout << "Case " << count << ": " << ans << endl;
        count++;
    }   
    return 0;
}