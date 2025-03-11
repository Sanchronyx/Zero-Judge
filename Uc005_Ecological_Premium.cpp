#include <iostream>
using namespace std;

int main(void){
    int cases{0};
    cin >> cases;
    while (cases--){
        int num{0}, ans{0};
        cin >> num;
        while (num--){
            int space{0}, animals{0}, grade{0};
            cin >> space >> animals >> grade;
            ans += space * grade;
        }
        cout << ans << endl;
    }
    return 0;
}