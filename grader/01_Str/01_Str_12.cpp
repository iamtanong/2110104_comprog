#include<bits/stdc++.h>
using namespace std;

int substrtoInt(string substring) {
    int n=0;
    for(int i=0; i<substring.length(); i++) {
        n += (substring[i]-'0') * (pow(10, substring.length()-i-1));
    }
    return n;
}

int main() {

    string s; cin >> s;
    string d = s.substr(0,2);
    string m = s.substr(3,2);
    string y = s.substr(6,4);
    
    int month = substrtoInt(m);
    int date = substrtoInt(d);
    int year = substrtoInt(y) - 543;

    string arr[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    cout << arr[month-1] << " " << date << ", " << year;

    return 0;
}