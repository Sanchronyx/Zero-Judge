#include <iostream>
#include <vector>
using namespace std;

void calculation(int x){
    bool check = false;
    vector <int> output{};
    int count{}, i{};
    for (i = 1; i <= x; i++){
        if (x % i == 0){
            output.push_back(i);
            count++;
        }
    }
    for (i = 0; i < count; i++){
        if (output[i] == 2)check = true;
    }
    if (check == true)cout << "2^2 * " << output.back() << endl;
    else if (output.size() == 2)cout << x << endl; 
    else cout << output[output.size() - 3] << " * " << output.back() << endl;
}

int main(void){
    int input{};
    cin >> input;
    calculation(input);
    return 0;
}