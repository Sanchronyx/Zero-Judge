#include <iostream>
using namespace std;

int threeplusone (int n, int m){
    int count{0};
    int maX = max(n, m);
    int miN = min(n, m);
    for (int i = miN; i <= maX; i++){
        if (i == 1) break;
        else if (i % 2 != 0) i = 3 * i + 1;
        else i = i / 2;
        count++;
    }
    return count;
}

int main(void){
    int n{0}, m{0};
    while (cin >> n >> m){
        cout << n << " "  << m << " " << threeplusone(n, m) << endl;
    }
    return 0;
}