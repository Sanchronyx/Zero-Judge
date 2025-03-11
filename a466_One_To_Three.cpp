#include <iostream>
#include <string>
using namespace std;

int main(void){
    int num{0};
    cin >> num;
    cin.ignore();
    string input{};
    while (num > 0){
        getline(cin, input);
        if (input.length() == 5) cout << "3" << endl;
        else {
            if ((input[0] == 'o' && input[1] == 'n') || (input[0] == 'o' && input[2] == 'e') || (input[1] == 'n' && input[2] == 'e')) cout << "1" << endl;
            else if ((input[0] == 't' && input[1] == 'w') || (input[0] == 't' && input[2] == 'o') || (input[1] == 'w' && input[2] == 'o')) cout << "2" << endl;
        }
        num--;
    }
    return 0;
}