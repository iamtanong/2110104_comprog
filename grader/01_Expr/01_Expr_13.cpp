#include<bits/stdc++.h>
using namespace std;

double roundd(double n) {
    return round(n*1e3)/1e3;
}

int main() {

    double a,b,c;
    cin >> a >> b >> c;

    double x1 = ((-1*b) - sqrt((b*b) - (4*a*c)))/(2*a);
    double x2 = ((-1*b) + sqrt((b*b) - (4*a*c)))/(2*a);

    cout << roundd(x1) << " " << roundd(x2);

    return 0;
}