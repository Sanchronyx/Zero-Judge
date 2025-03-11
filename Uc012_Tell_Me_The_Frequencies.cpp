#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    string str;
    while (getline (cin, str)){
        map <int, int> frequency;
        for (size_t i = 0; i < str.length(); i++){
            int key = int(str[i]);
            auto it = frequency.find(key);
            if (it != frequency.end()) it->second++;
            else frequency.insert(pair <int, int>(key, 1));
        }
        vector <pair<int, int>> freq (frequency.begin(), frequency.end());
        sort (freq.begin(), freq.end(), [] (const pair <int, int>& a, const pair <int, int>& b) {
            return a.second < b.second;
        });

        for (const auto& pair : freq){
            cout << pair.first << " " << pair.second << endl;
        }
        cout << endl;
    }
    return 0;
}