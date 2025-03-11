#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void armstrong (int n, int m){
    vector <int> results;
    for (int i = n; i <= m; i++){
        int copy = i, ans{0}, count{0}, copy2 = i;
        while (copy2 > 0){
            count++;
            copy2 /= 10;
        }
        while (copy > 0){
            ans += pow((copy % 10), count);
            copy /= 10;
        }
        if (ans == i) results.push_back(ans);
    }
    if (results.empty())cout << "none" << endl;
    else for (size_t i = 0; i < results.size(); i++){
        cout << results[i];
        if (i != results.size()-1)cout << " ";
    }
}

int main(void){
    int n{0}, m{0};
    cin >> n >> m;
    armstrong(n, m);
    return 0;
}   