#include <iostream>
#include <vector>
#include <string>
using namespace std;

void fzero(long long int n, long long int m){
    vector <int> counts(m, 0);
    long long int value{1}, i{0}, count{1}, zeroes{0};
    value = n;
    for (i = 1; i <= m; i++){
        value *= i;
        zeroes = 0;
        string it = to_string(value);
        for (int j = it.length() - 1; j >= 0; j--){
            if (it[j] == '0') zeroes++;
            else break;
        }
        if (zeroes > 1) counts[i] = zeroes;
    }
    for (i = 1; i < m; i++){
        if (counts[i] != counts[i-1]) count++;
    }
    cout << count << endl;
}

int main(void){
    long long int n{0}, m{0};
    while (cin >> n >> m){
        if (n == 0 && m == 0)break;
        else fzero(n, m);
    }
    return 0;
}