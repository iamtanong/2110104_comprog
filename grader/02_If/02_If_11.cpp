#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    string arr[] = {"01", "02", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30",
                    "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "51", "53", "55", "58"};

    bool ck=false;
    for(auto a: arr) {
        if(a==s) {
            ck=true;
            break;
        }
    }
    if(ck) cout << "OK";
    else cout << "Error";
    
    return 0;
}