#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; int k;
    cin >> s >> k;
    int cnt=0;
    string substr, p;

    for(int i=0; i<s.length(); i++) {

        // if(i == s.length()-1 && cnt<k) {
        //     for(auto j:p) {
        //         substr.push_back(j);
        //     }
        // }

        // if(s[i] == s[i-1] || i==0) cnt++;


       
        

        if(s[i] != s[i-1] && i>0) {
            if(cnt < k) {
                for(auto j:p) {
                    substr.push_back(j);
                }
                p.clear();
                cnt = 0;
            }

            else if(cnt >= k) {
                cnt=0;
                p.clear();
            }
        }


        p.push_back(s[i]);
        cnt++;
    }
    // if(i == s.length()-1 && cnt<k) {
    //     for(auto j:p) {
    //         substr.push_back(j);
    //     }
    // }

    if(cnt < k) {
        for(auto j:p) {
                    substr.push_back(j);
                }
    }

    cout << substr;

    return 0;
}