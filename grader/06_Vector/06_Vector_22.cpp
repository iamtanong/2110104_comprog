#include<bits/stdc++.h>
using namespace std;

vector<int> vec;
vector<tuple<int, int, int>> vec_range;

int main() {

    string s; getline(cin, s);
    int num=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') {
            vec.push_back(num);
            num = 0;
        }
        else if(s[i+1] == '\0') {
            num *= 10;
            num += s[i] - '0';
            vec.push_back(num);
        }
        else {
            num *= 10;
            num += s[i] - '0';
        }
    }

    int max_range = INT_MIN, range=0;
    for(int i=0; i<vec.size(); i++) {
        if(i != 0 && vec[i] != vec[i-1]) {
            max_range = max(max_range, range);
            range = 0;
        }

        range++;
    }

    int cnt=0;
    for(int i=0; i<vec.size(); i++) {
        if(i !=0 && vec[i] != vec[i-1]) {
            if(cnt == max_range) {
                vec_range.push_back(make_tuple(vec[i-1], i-max_range, i));
            }
            cnt = 0;
        }
        cnt++;

        if(i == vec.size()-1 && cnt == max_range) {
            vec_range.push_back(make_tuple(vec[i], i-max_range+1, i+1));
        }
    }
    
    sort(vec_range.begin(), vec_range.end());

    for(auto i: vec_range) {
        cout << get<0>(i) << " --> x[ " << get<1>(i) << " : " << get<2>(i) << " ]" << endl;
    }


    return 0;
}