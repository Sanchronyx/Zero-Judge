#include <iostream>
using namespace std;

int main(void){
    int times{0};
    cin >> times;
    cin.ignore();
    while (times > 0){
        int n{0}, m{0};
        cin >> n >> m;
        cout << n-m << endl;
        times--;
    }
    return 0;
}