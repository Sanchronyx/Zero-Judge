#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool prime_check(int num){
    if (num < 2)return false;
    if (num == 2)return true;
    if (num % 2 == 0)return false;
    for (int i = 3; i*i <= num; i+=2){
        if (num % i == 0) return false;
    }
    return true;
}

int main(void){
    string str{};
    int num{0}, case_num{1};
    cin >> num;
    cin.ignore();
    while (num > 0){
        getline(cin, str);
        map <char, int> letter;
        for (size_t i = 0; i < str.length(); i++){
            auto it = letter.find(str[i]);
            if (it != letter.end()) it->second++;
            else letter.insert(pair<char, int>(str[i], +1));
        }
        vector <char> final_letters(str.length(), 0);
        int i{0};
        for (auto it = letter.begin(); it != letter.end(); it++){
            if (prime_check(it->second)) final_letters[i++] = it->first;
        }
        if (i != 0){
            cout << "Case " << case_num << ": ";
            for (int j = 0; j < i; j++){
                cout << final_letters[j];
            }
            cout << endl;
        }
        else cout << "Case " << case_num << ": " << "empty" << endl;
        num--, case_num++;
    }
    return 0;
}