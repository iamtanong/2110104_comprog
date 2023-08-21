#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0), cin.tie(0);

    string str;
    while(getline(cin, str)) {
        int len = str.length();
        int level=0;
        bool num_ck=false, A_ck=false, a_ck=false, other_ck=false;
        for(auto i : str) {
            if(!num_ck && i >= '0' && i<='9') {
                level++;
                num_ck = true;
            }
            if(!A_ck && i >= 'A' && i <= 'Z') {
                level++;
                A_ck=true;
            }
            if(!a_ck && i >= 'a' && i <= 'z') {
                level++;
                a_ck=true;
            }
            if(!other_ck && (i=='+'||i=='-'||i=='*'||i=='/'||i=='!'||i=='@'||i=='#'||i=='$'||i=='%'||i=='^'||i=='&'
                ||i=='?'||i=='{'||i=='}'||i==':'||i==';'||i=='<'||i=='>')) {
                level++;
                other_ck=true;
            }
        }
        
        if(len >= 12 && level>=4) cout << ">> strong\n";
        else if(len >= 8 && level >=3) cout << ">> weak\n";
        else cout << ">> invalid\n";
    }

    return 0;
}