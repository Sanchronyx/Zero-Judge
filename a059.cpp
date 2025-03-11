#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int num{0}, case_num{1};
    cin >> num;
    while (num--){
        int x{0}, y{0}, sum{0};
        cin >> x >> y;
        for (int i = ceil(sqrt(x)); i <= sqrt(y); i++){
            sum += i * i;
        }
        cout << "Case " << case_num << ": " << sum << endl;
        case_num++;
    }   
    return 0;
}