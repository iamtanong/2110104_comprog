#include<bits/stdc++.h>
using namespace std;

int main() {

    int year; cin >> year;
    year = year-543;

    int n = (year/4 )-1;
    int result = (year + n + 11) % 7;
    cout << result;

    return 0;
}