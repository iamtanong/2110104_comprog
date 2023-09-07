#include<bits/stdc++.h>
using namespace std;

vector<int> vec;

void sendtovec(int num) {
    bool ck = true;
    for(auto i=vec.begin(); i!=vec.end(); i++) {
        if(num == *i) {
            ck = false;
            break;
        }
    }
    if(ck) vec.push_back(num);
}

int main() {

    string s; getline(cin, s);
    int num=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') {
            sendtovec(num);
            num = 0;
        }
        else {
            num *= 10;
            num += s[i]-'0';
        }

        if(s[i+1] == '\0') {
            sendtovec(num);
            num = 0;
        }

    }
    sort(vec.begin(), vec.end());

    cout << vec.size() << endl;

    int len = min(10, int(vec.size()));

    for(int i=0; i < len; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}