#include<bits/stdc++.h>
using namespace std;

int main() {

    string s, str;
    getline(cin, s);
    getline(cin, str);

    int cnt=0;
    for(int i=0; i<str.length()-s.length()+1; i++) {
        if(str[i] == s[0] && ((str[i-1] == ' ' || str[i-1] == '\"' || str[i-1] == '\'' || str[i-1] == '(' || str[i-1] == ')' 
            || str[i-1] == ',' || str[i-1] == '.' || i==0) && (str[i+s.length()] == ' ' || str[i+s.length()] == '\"' || 
            str[i+s.length()] == '\'' || str[i+s.length()] == '(' || str[i+s.length()] == ')' || str[i+s.length()] == ',' 
            || str[i+s.length()] == '.' || str[i+s.length()] == '\0'))) {
            bool ck = true;
            for(int j=1; j<s.length(); j++) {
                if(str[i+j] != s[j]) {
                    ck = false;
                    break;
                }
            }
            if(ck) cnt++;
        }
    }
    cout << cnt;

    return 0;
}