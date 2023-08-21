#include<bits/stdc++.h>
using namespace std;
long getint(string a){
    long ans = 0;
    for(int i = 0 ; i < a.length() ; i++){
        ans += pow(10,a.length() - 1 - i) * (a[i] - '0');
    }
    return ans;
}
long gcd(long long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}
int main(){
    string a,b,c;
    cin >> a >> b >> c;
    long a_num = getint(a),b_num = getint(b),c_num = getint(c);
    long fraction  = 0;
    for(int i = 0 ; i < c.length() ; i++){
        fraction += pow(10,i) * 9;
    }
    fraction = max(fraction,long(1));
    b_num *= fraction;
    fraction *= pow( 10 , b.length() );
    a_num *= fraction;
    long rest = a_num + b_num + c_num;
    long GCD = gcd(rest,fraction);
    cout << rest/GCD << " / " << fraction/GCD;
}