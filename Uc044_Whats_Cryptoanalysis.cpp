#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int lines{0};
    cin >> lines;
    cin.ignore();
    map <char, int> letters;
    while (lines--){
        string str;
        getline (cin, str);
        for (size_t i = 0; i < str.length(); i++){
            if (isalpha(str[i])){
                auto it = letters.find(str[i]);
                if (it != letters.end())it -> second++;
                else letters.insert(pair<char, int>(str[i], +1));
            }
        }
    }
    vector <pair <char, int>> output(letters.begin(), letters.end());
    sort(output.begin(), output.end(), [](const auto &a, const auto &b){
        return a.second > b.second;
    });
    for (const auto &x : output){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}