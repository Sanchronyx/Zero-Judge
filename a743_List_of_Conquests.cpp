#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(void){
    map <string, int> country;
    string country_info, country_name;
    int num{0};
    cin >> num;
    while (num > 0){
        getline(cin>>ws, country_info);
        stringstream ss(country_info);
        ss >> country_name;
        auto it = country.find(country_name);
        if (it != country.end()) it->second++;
        else country.insert(pair<string, int>(country_name, +1));
        num--;
    }

    for (auto it = country.begin(); it != country.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}