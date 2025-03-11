#include <iostream>
#include <string>
using namespace std;

void decoder (string input, int len){
    int shift{7}, i{0};
    string output = input;
    // for (i = 0; i < len; i++){
    //     if (islower(input[i])){
    //         output[i] = (((input[i] - 'a' - shift + 26) % 26) + 'a');
    //     }
    //     else if (isupper(input[i])){
    //         output[i] = (((input[i] - 'A' - shift + 26) % 26) +'A');
    //     }
    //     else {
    //         output[i] = input[i] - shift;
    //         if (output[i] < 32) output[i] += 94;
    //     }
    // }
    for (i = 0; i < len; i++){
        output[i] = input[i] - shift;
    }
    cout << output << endl;
}

int main(void){
    string input{};
    getline(cin>>ws, input);
    int len = (input.length());
    decoder(input, len);
    return 0; 
}