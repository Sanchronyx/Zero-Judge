#include <iostream>
using namespace std;

int main(void){
    int v{0}, t{0}, answer{0};
    while (cin >> v >> t){
        answer = 2 * t * v;
        cout << answer << endl;
    }
    return 0;
}