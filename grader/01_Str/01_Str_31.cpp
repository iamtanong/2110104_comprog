#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

long substrtoInt(string substring) {
    long n=0;
    for(int i=0; i<substring.length(); i++) {
        n += (substring[i]-48) * (pow(10, substring.length()-i-1));
    }
    return n;
}

int main() {

    string num, decimal, repeat;
    cin >> num >> decimal >> repeat;
    long top=0, btm=0;

    int decimal_base = decimal.length();
    int repeat_base = repeat.length();

    top = (substrtoInt(decimal) * pow(10, repeat_base)) + substrtoInt(repeat) - substrtoInt(decimal);

    while(repeat_base--) {
        btm = (btm*10)+9;
    }
    while (decimal_base--){
        btm = btm*10;
    }
    

    top += btm*substrtoInt(num);

    long divide = gcd(top, btm);
    cout << top/divide << " / " << btm/divide;

    return 0;
}