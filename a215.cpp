#include <iostream>
using namespace std;

int main(void){
    int n{0}, m{0};
    while (cin >> n >> m){
        int sum{n}, count{1};
        for (int i = 1; sum <= m; i++){
            sum += (n + i);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}