#include <bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cin >> a;
    double l = 0,r = a;
    double mid = (l+r)/double(2);
    double m = pow(10,mid);
    double c = pow(10,-10);
    while( !(abs(a - m) <= double(max(a,m)*c)) ){
        if(m > a) r = mid;
        else l = mid;
        mid = (l+r)/double(2);
        m = pow(10,mid);
    }
    cout << mid;
}