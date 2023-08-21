#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c,d; cin >> a >> b >> c >> d;
    if(a >b) {
        int temp = b;
        b = a;
        a = temp;

        if(d >= a) {
            if(c > d) c -= a;
        }
        else c += a;        

        b = a+c+d;
    }
    else{
        if(c > a && a >= b) d = d+a;
        
        if(d>c) b = b+2;
        else b *= 2;
        
    }

    cout << a << " " << b << " " << c << " " << d;

    return 0;
}