#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    int length{0}, amount{0};
    cin >> length >> amount;
    vector <int> bars(amount, 0);
    for (int i = 0; i < amount; i++){
        cin >> bars[i];
    }
    sort(bars.rbegin(), bars.rend());
    int ans{0};
    for (int i = 0; i < amount; i++){
        if (ans + bars[i] <= length) ans += bars[i];
        if (ans == length)break;
    }
    if (ans == length) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(void){
    int t{0};
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}