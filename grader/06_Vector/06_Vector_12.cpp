#include<bits/stdc++.h>
using namespace std;

vector<int> vec;

int main() {

    int num; cin >> num;
    vec.push_back(num);
    while(num != 1) {
        if(num %2 == 0) num /= 2;
        else num = (3*num)+1;

        vec.push_back(num);
    }

    auto i = vec.begin();
    if(vec.size() > 15) {
        i = vec.end() - 15;
    }
    bool ck=false;
    for(; i < vec.end(); i++) {
        if(ck) cout << "->";
        cout << *i;
        ck = true;
    }

    return 0;
}