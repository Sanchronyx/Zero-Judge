#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

const int MAX = 10;

int main(void){
    int t{0}, count{1};
    cin >> t;
    cin.ignore();
    while (t > 0){
        map <string, int> url;
        vector <string> url_string;
        string input;
        int freq{0}, max{-999};
        for (int i = 0; i < MAX; i++){
            getline(cin, input);
            stringstream ss(input);
            string output;
            (ss >> output);
            (ss >> freq);
            if (freq > max) max = freq;
            url_string.push_back(output);
            url[output] += freq;
            // auto it = url.find(output);
            // if (it != url.end()) it-> second += freq;
            // else url.insert(pair<string, int>(output, freq));
        }
        cout << "Case #" << count << ":" << endl;
        for (const auto& it : url_string){
            if (url[it] == max) cout << it << endl;
        }
        t--, count++;
    }
    return 0;
}