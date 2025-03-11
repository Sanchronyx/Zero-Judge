#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string remove_space(string input) {
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    return input;
}

int main(void){
    int num{0}, count{1};
    cin >> num;
    cin.ignore();
    while (num > 0){
        string input1{}, input2{};
        getline(cin, input1);
        getline(cin, input2);
        if (input1 == input2)cout << "Case " << count << ": Yes" << endl;
        else if (remove_space(input1) == remove_space(input2)) cout << "Case " << count << ": Output Format Error" << endl;
        else cout << "Case " << count << ": Wrong Answer" << endl;
        num--, count++;
    }
    return 0;
}

//else {
        //     if (input1.length() != input2.length()) cout << "Case " << count << ": Output Format Error" << endl;
        //     else {
        //         int space1{0}, space2{0};
        //         for (size_t i = 0; i < input1.length(); i++){
        //             if (isspace(input1[i]))space1++;
        //             if (isspace(input2[i]))space2++;
        //         }
        //         if (space1 != space2)cout << "Case " << count << ": Output Format Error" << endl;