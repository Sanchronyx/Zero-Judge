#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
    int n{0}, m{0};
    while (cin >> n >> m){
        if (n == 0 && m == 0) break;
        int count{0}, carry{0};
        int val = n > m ? n : m;
        while (val > 0){
            if ( ((n % 10) + (m % 10) + carry) > 9) {
                count++;
                carry = 1;
            }
            else carry = 0;
            n /= 10;
            m /= 10;
            val /= 10;
        }
        if (count == 0) cout << "No carry operation." << endl;
        else if (count == 1) cout << count << " carry operation." << endl;
        else cout << count << " carry operations." << endl;
    }
    return 0;
}