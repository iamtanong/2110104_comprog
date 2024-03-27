#include<bits/stdc++.h>
using namespace std;

vector<pair<double, string>> vec;

bool cmp(pair<double, string> a, pair<double, string> b) {
    if(a.first == b.first) return a.second > b.second;
    return a.first > b.first;
}

int main() {

    vec = {{20.0, "a"}, {30.0, "b"}, {30.0, "c"}};

    sort(vec.begin(), vec.end(), cmp);

    for(auto i : vec) {
        cout << i.second << " : " << i.first << endl;
    }

    return 0;
}