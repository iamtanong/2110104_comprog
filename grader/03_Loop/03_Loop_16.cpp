#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;

    for(int i=1; i<=num; i++) {
        for(int j=1; j<= 2*num-1; j++) {
            // cout << "*";
            if(j-1 == num-i || j == num+i-1 || i==num) cout << "*";
            else if(j-1 < num-i || j < num+i-1) cout << ".";
            else cout << " ";
        }
        cout << '\n';
    }

    return 0;
}