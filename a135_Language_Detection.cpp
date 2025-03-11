#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void){
    map <string, string> country;
    country.insert(pair<string, string>("HELLO", "ENGLISH"));
    country.insert(pair<string, string>("HOLA", "SPANISH"));
    country.insert(pair<string, string>("HALLO", "GERMAN"));
    country.insert(pair<string, string>("BONJOUR", "FRENCH"));
    country.insert(pair<string, string>("CIAO", "ITALIAN"));
    country.insert(pair<string, string>("ZDRAVSTVUJTE", "RUSSIAN"));
    string input;
    int i{1};
    while (cin >> input){
        if (input == "#")break;
        auto it = country.find(input);
        if (it != country.end()) cout << "Case " << i << ": " << it->second << endl;
        else cout << "Case " << i << ": " << "UNKNOWN" << endl;
        i++;
    }
    return 0;
}