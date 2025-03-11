#include <iostream>
using namespace std;

void solve (int n){
    int output = ((n-1)/3) + 1;
    cout << output << endl;
}

int main(void){
    int n{0};
    cin >> n;
    solve(n);
    return 0;
}