#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool solve(string str){
    stack <char> st;
    for (size_t i = 0; i < str.size(); i++){
        if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
            st.push(str[i]);
        }
        else {
            if (st.empty()) return false;
            char top = st.top();
            if (str[i] == ')'){
                if (top == '(') {
                    st.pop();
                }
                else return false;
            }
            else if (str[i] == ']'){
                if (top == '[') {
                    st.pop();
                }
                else return false;
            }
            else if (str[i] == '}'){
                if (top == '{') {
                    st.pop();
                }
                else return false;
            }
        }
    }
    if (st.empty()) return true;
    else return false;
}

int main(void){
    int num{0};
    cin >> num;
    cin.ignore();
    while (num--){
        string str;
        getline(cin, str);
        bool check = solve(str);
        if (check) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}