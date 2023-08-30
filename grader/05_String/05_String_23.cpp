#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    int num; cin >> num;
    int back = (s[4]-'0')*100 + (s[5]-'0')*10 + (s[6]-'0');

    back += num;
    int z = back/1000;
    back %= 1000;

    s[4] = back/100 + '0';
    s[5] = (back/10)%10 + '0';
    s[6] = back%10 + '0';
    
    int i = ((s[2]-'A') +z);
    s[2] = i%26 + 'A';
    
    int y=i/26;

    int j = ((s[1]-'A') +y);
    s[1] = j%26 + 'A';

    int x = j/26;
    s[0] += x;

    cout << s;

    return 0;
}