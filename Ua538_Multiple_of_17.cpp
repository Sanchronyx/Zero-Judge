#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void){
    long long int num{0};
    string str{};
    while (getline(cin, str)){
        if (str == "0")break;
        else {
            stringstream ss (str);
            (ss >> num);
            if (num % 17 == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}