#include <iostream>
using namespace std;

const int MAX = 4;

void sequence(int values[]){
    int i{};
    bool check = false;
    if (values[1] - values[0] == values[3] - values[2])check = true;
    if (check == true){
        for (i = 0; i < MAX; i++){
            cout << values[i] << ' ';
        }
        cout << values[3]+values[1]-values[0] << endl;
    }
    else {
        for (i = 0; i < MAX; i++){
            cout << values[i] << ' ';
        }
        cout << values[3]*(values[1]/values[0]) << endl;
    }
}

int main(void){
    int input{}, i{};
    int values[MAX];
    cin >> input;
    while (input > 0){
        for (i = 0; i < MAX; i++){
            cin >> values[i];
        }
        sequence(values);
        input--;
    }
    return 0;
}