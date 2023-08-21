#include<bits/stdc++.h>
using namespace std;


long change(string a)
{
    long num = 0 , j = 0;
    for (int i = 0 ; i < a.length()  ; i++){
        num += ((a[i]-48) * (pow(10 ,a.length() - i - 1))) ;
        //cout << ((a[i]-'0') * (pow(10 ,a.length() - i - 1))) << endl;
        j++ ;
    }
    if (j == 3 || j == 5 || j == 8) return num +=1 ;
    else if (j == 9) return num +=2 ;
    return num ;
}

long gcd(long a, long b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}




int main()
{
    string a , b , c ;
    int n_a , n_b , n_c;
    int sum , tangcd , top , bottom;
    cin >> a >> b >> c ;

    n_a = change (a) ;
    //n_b = change (b) ;
    //n_c = change (c) ;

   cout << n_a ;
    return 0;
}