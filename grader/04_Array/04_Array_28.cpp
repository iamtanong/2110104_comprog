#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; getline(cin, s);
    int arr[26] = {0};
    // memset(arr, 0, 26);
    for(auto i: s) {
        if(i >= 'A' && i <= 'Z') {
            int c = i-'A';
            arr[c]++;
        }
        else if(i >= 'a' && i <= 'z') {
            int c = i-'a';
            arr[c]++;
        }
    }
    for(int i=0; i< 26; i++) {
        if(arr[i]>0) cout << char(i+'a') << " -> " << arr[i] << endl;
    }

    return 0;
}