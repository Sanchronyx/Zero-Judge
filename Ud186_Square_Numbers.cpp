#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int a{0}, b{0};
    while (cin >> a >> b){
        if (a == 0 && b == 0)break;
        int count{0};
        for (int i = a; i < b; i++){
            int tempa = pow(i, 2);
            if (sqrt(tempa) == i)count++;
        }
        cout << count << endl;
    }
    return 0;
}