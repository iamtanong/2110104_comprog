#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;

    for(int i=num; i>0; i--) {
        for(int j = (num*-1)+1; j < num; j++) {
            if(abs(j) == num-i || i==1) cout << "*";
            else if(j <= num-i) cout << ".";
            else cout << " ";
        }
        cout << '\n';
    }

    return 0;
}