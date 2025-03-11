#include <iostream>
#include <string>
using namespace std;

int solve(string str){
    int ans{0};
    for (size_t i = 0; i < str.length(); i++){
        if (str[i] == '.') {
            ans++;
            i += 2;
        }
    }
    return ans;
}

int main(void){
    int cases{0}, count{1};
    cin >> cases;
    while (cases--){
        int size{0};
        cin >> size;
        cin.ignore();
        string str;
        getline(cin, str);
        int output = solve(str);
        cout << "Case " << count << ": " << output << endl;
        count++;
    }
    return 0;
}