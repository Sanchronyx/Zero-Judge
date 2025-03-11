#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    getline(cin, str);
    string copy = str;
    size_t count{0};
    for (size_t i = 0, j = str.length()-1; i < str.length(); i++, j--){
        if (str[i] == copy[j])count++;
    }
    if (count == str.length())cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}