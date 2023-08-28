#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    string db[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string dbx[] = {"ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string dbc[]= {"\0", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if(s == "0") {
        cout << "zero" << endl;
        return 0;
    }

    bool ck=false;
    bool ck2 = false;
    for(int i=0; i<s.length(); i++) {
        int digit = s.length()-i;
        int num = s[i]-'0';
        
        if(digit%3 == 2) {
            if(s[i] == '1'){
                cout << dbx[s[i+1]-'0'] << " ";
                ck = true;
            }
            else if(s[i] >= '2') {
                cout << dbc[num-1] << " ";
                ck = true;
                // cout << db[s[i+1]-'0'-1] << " ";
            }
            
            // continue;
        }
        if(num>0) {
            if(digit%3 != 2 && !ck2) {
                cout << db[num-1] << " ";
                ck = true;
            }
            if(digit%3 == 1){
                ck2 = false;
            }
            if(digit%3 == 0) {
                cout << "hundred" << " ";
            }
        }
        
        if(ck && (digit == 4 || digit == 7 || digit == 10 || digit == 13)){
            if(digit == 4)cout << "thousand" << " ";
            else if(digit == 7) cout << "million" << " ";
            else if(digit == 10) cout << "billion" << " ";
            else if(digit == 13) cout << "trillion" << " ";
            ck = false;
        }
        
    }

    return 0;
}