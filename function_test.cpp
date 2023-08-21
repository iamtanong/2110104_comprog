#include<bits/stdc++.h>
using namespace std;

int to_sec(int h, int m, int s) {
    return h*3600 + m*60 + s;
}

int diff(int h1, int m1, int s1, int h2, int m2, int s2) {
    return to_sec(h2, m2, s2) - to_sec(h1, m1, s1);
}

int main() {

    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    // cout << to_sec(h1, m1, s1) << endl;
    // cout << to_sec(h2, m2, s2) << endl;
    cout << diff(h1, m1, s1, h2, m2, s2) << endl;


    return 0;
}

/*
7 3 4
*/