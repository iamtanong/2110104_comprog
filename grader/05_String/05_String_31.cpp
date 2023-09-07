#include<bits/stdc++.h>
using namespace std;
    
string db[] = {"UUUU", "UUUL", "UULU", "UULL", "ULUU", "ULUL", "ULLU", "ULLL", "LUUU", "LUUL", "LULU", "LULL"};

void encrypt(string fake_str, string str) {
    string str = "";
    for(auto i: str) {
        int index = -1;
        if(i >= '0' && i <= 9) {
            index = i-'0';
        }
        else if(i== '-') {
            index = 10;
        }
        else if(i == ',') {
            index = 11;
        }
        str.append(db[index]);
    }
}

int main() {

    string fake_str; cin >> fake_str;
    char mode;
    string str;
    while(cin >> mode >> str) {
        encrypt(fake_str, str);
    }

    return 0;
}