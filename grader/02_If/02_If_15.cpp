#include<bits/stdc++.h>
using namespace std;

int main() {

    string phone; cin >> phone;
    string sub = phone.substr(0,2);

    if(phone.length()==10 && (sub == "06" || sub == "08" || sub == "09")) cout << "Mobile number";
    else cout << "Not a mobile number";

    return 0;
}