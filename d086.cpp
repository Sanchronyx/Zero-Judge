#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    while (getline(cin, str)){
        if (str.empty())continue;
        if (str[0] == '0' && str.length() == 1)break;
        int sum{0};
        bool flag = false;
        for (size_t i = 0; i < str.length(); i++){
            if (isalpha(str[i])){
                char c = toupper(str[i]);
                sum += int(c) - 64;
            }
            else if (str[i] == ' '){
                continue;
            }
            else{
                flag = true;
                break;
            } 
        }
        if (!flag) cout << sum << endl;
        else cout << "Fail" << endl;
    }
    return 0;
}