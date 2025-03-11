#include <iostream>
using namespace std;

int main(void){
    int num_lines{0}, original_bottles{0}, street_bottles{0}, swap_bottles{0};
    cin >> num_lines;
    while (num_lines > 0){
        cin >> original_bottles >> street_bottles >> swap_bottles;
        int total_bottles = original_bottles + street_bottles;
        int num_drank{0};
        while (total_bottles >= swap_bottles){
            int new_drink = total_bottles / swap_bottles;
            num_drank += new_drink;
            total_bottles = (total_bottles % swap_bottles) + new_drink;
        }
        cout << num_drank << endl;
        num_lines--;
    }
    return 0;
}