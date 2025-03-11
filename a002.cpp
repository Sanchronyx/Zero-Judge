#include <iostream>
using namespace std;

void theDifference(long long int army, long long int enemy){
    int diff {abs(army-enemy)};
    cout << diff << endl;
}

int main(void){
    long long int army{}, enemy{};
    while (true){
        if (cin.eof())break;
        cin >> army;
        cin >> enemy;
        theDifference(army, enemy);
    }
    return 0;
}