#include <iostream>
using namespace std;

void addHello(string word){
    cout << "hello, " << word << endl;
}

int main(void){
    string word{};
    cin >> word;
    addHello(word);
    return 0;
}