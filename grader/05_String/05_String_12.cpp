#include<bits/stdc++.h>
using namespace std;


int main() {

    string sum = "0";
    while(1) {
        string num; cin >> num;
        if(num == "END") break;

        int k=0;
        if(num.length() > sum.length()) {
            int len = num.length()-sum.length();
            string s = "";
            while(len--) {
                s.push_back('0');
            }
            sum.insert(0, s);
        }
        else if(num.length() < sum.length()) {
            int len = sum.length()-num.length();
            string s = "";
            while(len--) {
                s.push_back('0');
            }
            num.insert(0, s);
        }

        for(int i=num.length()-1; i>=0; i--) {

            int plus = (sum[i]-'0') + (num[i]-'0') + k;
            sum[i] = (plus%10 + '0');
            k = plus/10;
            if(k>0 && i == 0) {
                string s = "";
                s.push_back(k+'0');
                sum.insert(0, s);
            }

            // cout << sum << " " << num[i] << " " << plus << endl;
        }
    }
    cout << sum << endl;

    return 0;
}