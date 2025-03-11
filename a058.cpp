#include <iostream>
using namespace std;

int  main(void){
    int n{0}, x{0}, y{0}, z{0};
    cin >> n;
    while (n--){
        int num{0};
        cin >> num;
        if (num % 3 == 0)x++;
        else if (num % 3 == 1)y++;
        else if (num % 3 == 2)z++;
    }
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}