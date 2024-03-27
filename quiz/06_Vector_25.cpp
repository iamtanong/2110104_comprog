#include<bits/stdc++.h>
using namespace std;

vector<pair<string, string>> vec;

string pluss(string grade) {
    if(grade == "F") return "D";
    if(grade == "D") return "D+";
    if(grade == "D+") return "C";
    if(grade == "C") return "C+";
    if(grade == "C+") return "B";
    if(grade == "B") return "B+";
    return "A";
}

int main() {

    while(1) {
        string name, grade;
        cin >> name;
        if(name == "q") break;

        cin >> grade;

        vec.push_back({name, grade});
    }

    cin.ignore();
    string str, substr;
    getline(cin, str);
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') continue;
        substr.push_back(str[i]);
        if(str[i+1] == '\0' || str[i+1] == ' ') {
            // cout << substr << " ";
            for(auto& i: vec) {
                if(i.first == substr) {
                    i.second = pluss(i.second);
                    break;
                }
            }
            substr.clear();
        }
    }
    for(auto i : vec) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}