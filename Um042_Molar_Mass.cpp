#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int swap (char x){
    if (x == 'C')return 12.010;
    else if (x == 'H') return 1.008;
    else if (x == 'O') return 16.000;
    else if (x == 'N') return 14.010;
    else return 0;
}

void calculate_atoms(string input){
    double output{0};
    for (size_t i = 0; i < input.length(); i++){
        if (i+1 < input.length() && isdigit(input[i+1])){
            output += swap(input[i]);
            output *= int(input[i+1]);
            i++;
        }
        else if (i+1 < input.length() && !isdigit(input[i+1])){
            output += swap(input[i]);
        }
    }
    cout << fixed << setprecision(3) << output << endl;
}

int main(void){
    int num{0};
    cin >> num;
    cin.ignore();    
    while (num > 0){
        string str;
        getline(cin, str);
        calculate_atoms(str);
        num--;
    }
    return 0;
}