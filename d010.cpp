#include <iostream>
#include <vector>
using namespace std;

int factor(int num){
    vector <int> val(num, 0);
    int count{0};
    for (int i = 1; i <= num/2; i++){
        if (num % i == 0)val[count++] = i;
    }
    int sum{0};
    for (int i = 0; i <= count; i++){
        sum += val[i];
    }
    if (sum == num)return 0;
    else if (sum > num)return 1;
    else return 2;
}

void decide (int num){
    if (num == 1) cout << "盈數" << endl;
    else if (num == 2)cout << "虧數" << endl;
    else if (num == 0)cout << "完全數" << endl;
}

int main(void){
    int num{0};
    while (cin >> num){
        int check = factor(num);
        decide (check);
    }
    return 0;
}