#include <iostream>
#include <string>
using namespace std;

int main(void){
    string sentence{};
    while (getline(cin, sentence)){
        int count{0};
        for (size_t i = 0; i < sentence.length(); i++){
            if (isspace(sentence[i]) && isspace(sentence[i+1]))count++;
        }
        cout << count << endl;
    }
    return 0;
}