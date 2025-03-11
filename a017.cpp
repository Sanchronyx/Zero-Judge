#include <iostream>
#include <string>
#include <vector>
using namespace std;

int precedence(char x){
    if (x == ')' || x == '(')return 1;
    else if (x == '*' || x == '/') return 2;
    else if (x == '+' || x == '-') return 3;
}

int addmas (int x, int y){
}

void calculation(string x){
    vector<int> stack{};
    for (int i = 0; i < x.length(); i++){
        
    }   
}

int main(void){
    string input;
    getline(cin>>ws, input);
    calculation(input);
    return 0;
}