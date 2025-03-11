#include <iostream>
using namespace std;

int main(void){
    int x{0}, y{0}, least_turns{0};
    while (cin >> x >> y){
        if (x == -1 && y == -1)break;
        least_turns = abs(x - y);
        int alt_answer = (100 - max(x, y) + min(x, y));
        if (least_turns < alt_answer) cout << least_turns << endl;
        else cout << alt_answer << endl;
    }
    return 0;
}