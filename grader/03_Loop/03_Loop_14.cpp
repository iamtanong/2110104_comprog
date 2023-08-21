#include<bits/stdc++.h>
using namespace std;

int main() {

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if(str1.length() != str2.length()) {
        cout << "Incomplete answer";
    }
    else {
        int score = 0;
        for(int i=0; i<str1.length(); i++) {
            if(str1[i] == str2[i]) {
                score++;
            }
        }
        cout << score;
    }

    return 0;
}