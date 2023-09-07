#include <iostream>
#include <vector>
using namespace std;


vector<string> split(string line, char delimiter) {
    vector<string> vec;
    string substr;
    for(auto i = 0; i<line.length(); i++) {
        if(line[i] == delimiter) continue;
        if(line[i+1] == delimiter || line[i+1] == '\0') {
            substr.push_back(line[i]);
            vec.push_back(substr);
            substr.clear();
        }
        else if(line[i] != delimiter) {
            substr.push_back(line[i]);
        }
    }

    return vec;
}


int main() {

    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);

    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}
