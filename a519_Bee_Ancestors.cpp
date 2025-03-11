#include <iostream>
using namespace std;

void fibonacci (long long bee){
    long long previous {1}, previous_2 {2}, current{0};
    for (long long int i = 3; i <= bee; i++){
        current = previous + previous_2;
        previous = previous_2;
        previous_2 = current;
    }
    cout << current << endl;
}

int main(void){
    long long int bee{0};
    while (cin >> bee){
        if (bee == 0) break;
        else if (bee <= 3)cout << bee << endl;
        else fibonacci(bee);
    }
    return 0;
}