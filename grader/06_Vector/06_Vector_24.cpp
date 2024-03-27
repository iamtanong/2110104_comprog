#include<bits/stdc++.h>
using namespace std;

vector<tuple<double, string, double>> vec;

bool cmp(tuple<double, string, double> a, tuple<double, string, double> b) {
    return get<0>(a) > get<0>(b);
}

int main() {

    while(1) {
        string s; cin >> s;
        if(s == "END") break;

        double price; cin >> price;
        vec.push_back({0, s, price});
    }
    string str, substr;
    cin.ignore();
    getline(cin, str);
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') continue;

        substr.push_back(str[i]);

        if(str[i+1] == '\0' || str[i+1] == ' ') {
            // cout << substr << " ";
            for(auto& tup : vec) {
                if(get<1>(tup) == substr) {
                    get<0>(tup) += get<2>(tup);
                    break;
                }
            }
            substr.clear();
        }
    }
    sort(vec.begin(), vec.end(), cmp);

    int cnt=0;
    for(auto i=0; i<vec.size() && i<3; i++) {
        if(get<0>(vec[i]) > 0) {
            cout << get<1>(vec[i]) << " " << get<0>(vec[i]) << endl ;
            cnt++;
        }
    }
    if(cnt == 0) cout << "No Sales";

    

    return 0;
}