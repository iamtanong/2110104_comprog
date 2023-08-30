#include<bits/stdc++.h>
using namespace std;

bool isSpecial(char c) {
    char arr[] =    {'$', '!', '@', '%', '^', '#', '&', '+', '*', '/', '=', '_', ':', ';', '[', ']', '{', '}', '(', ')', '>', 
                    '<', '?'};
    for(auto i : arr) {
        if(c == i) return true;
    }
    return false;
}

int main() {

    string s;
    while(getline(cin, s)) {
        bool isOpen = false;
        for(auto c: s) {
            if(isSpecial(c)) {
                isOpen = !isOpen;
                continue;
            }
            if(isOpen) {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}