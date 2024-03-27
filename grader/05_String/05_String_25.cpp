#include<bits/stdc++.h>
using namespace std;

int main() {

    string n, m;
    while(cin >> n >> m) {
        int a = n[n.length()-1]-'0';
        int b = 0;
        if(m.length() >= 2) b = ((m[m.length()-2]-'0')*10) + m[m.length()-1]-'0';
        else b = m[m.length()-1] -'0';

        int r = b%4;
        int c=0;
        if(r == 0) r+=4;
        
        if(b == 0) c = 1;
        else c = pow(a, r);

        cout << ">> " << c%10 << endl;

    }

    return 0;
}