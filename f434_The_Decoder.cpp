#include <iostream>
#include <string>
using namespace std;

void convert(const string& input){
    int shift{7}, i{0};
    string output = input;
    for (i = 0; i < input.length(); i++){
        output[i] = input[i] - shift;
    }
    cout << output << endl;
}

int main(void){
    string input{};
    while (getline(cin>>ws, input)){
        convert(input);
    }
    return 0;
}