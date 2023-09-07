#include<bits/stdc++.h>
using namespace std;

vector<string> vec;

int main() {

    string s; getline(cin, s);

    string substr;
    for(int i=0; i<s.length(); i++) {
        if(s[i] != ' ') substr.push_back(s[i]);
        if(s[i+1] == ' ' || s[i+1] == '\0') {
            vec.push_back(substr);
            substr.clear();
        }
    }

    string sara[] = {"", ""};
    bool ck = false;
    for(int i=1; i<vec[0].length(); i++) {
        if(vec[0][i] == 'a' || vec[0][i] == 'e' || vec[0][i] == 'i' || vec[0][i] == 'o' || vec[0][i] == 'u') {
            ck = true;
        }
        if(ck)
            sara[0].push_back(vec[0][i]);
    }
    ck = false;
    for(int i=1; i<vec[vec.size()-1].length(); i++) {
        if(vec[vec.size()-1][i] == 'a' || vec[vec.size()-1][i] == 'e' || vec[vec.size()-1][i] == 'i' || vec[vec.size()-1][i] == 'o' || vec[vec.size()-1][i] == 'u') {
            ck = true;
        }
        if(ck)
            sara[1].push_back(vec[vec.size()-1][i]);
    }
    
    int len1 = sara[0].length();
    while(len1--) {
        vec[0].pop_back();
    }
    int len2 = sara[1].length();
    while(len2--) {
        vec[vec.size()-1].pop_back();
    }
    vec[0].append(sara[1]);
    vec[vec.size()-1].append(sara[0]);


    for(auto i : vec) cout << i << " ";

    return 0;
}