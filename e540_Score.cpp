#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(void){
    int T{0};
    cin >> T;
    while (T--){
        string arr;
        getline(cin>>ws, arr);
        int score{0}, current_score{0};
        for (size_t i = 0; i < arr.length(); i++){
            if (arr[i] == 'O') current_score += 1;
            else if (arr[i] == 'X') current_score = 0;
            score = score + current_score;
        }
        cout << score << endl;
    }
    return 0;
}
