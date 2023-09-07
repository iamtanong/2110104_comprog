#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
vector<tuple<string, double, vector<string>, string>>vec;

bool score_cmp(tuple<string, double, vector<string>, string> a, tuple<string, double, vector<string>, string> b){
    return get<1>(a) > get<1>(b);
}

bool num_cmp(tuple<string, double, vector<string>, string> a, tuple<string, double, vector<string>, string> b){
    return stoll(get<0>(a)) < stoll(get<0>(b));
}

int main() {

    int num; cin >> num;
    while(num--) {
        string s; cin >> s;
        int n; cin >> n;

        mp[s] = n;
    }
    int m; cin >> m;
    while(m--) {
        string s;
        double score;
        cin >> s >> score;

        vector<string> order;
        for(int i=0; i<4; i++) {
            string o; cin >> o;
            order.push_back(o);
        }
        vec.push_back({s, score, order, ""});
    }

    sort(vec.begin(), vec.end(), score_cmp);

    // auto tup : vec didn't work
    // require auto&
    for(auto& tup : vec) {
        vector<string> order = get<2>(tup);
        for(auto j : order) {
            if(mp[j] > 0) {
                mp[j]--;
                get<3>(tup).append(j);
                break;
            }
        }
    }
    sort(vec.begin(), vec.end(), num_cmp);

    cout << "\n\n";
    for(auto i : vec) {
        cout << get<0>(i) << " " << get<3>(i) << endl;
    }

    return 0;
}