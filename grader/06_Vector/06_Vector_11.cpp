#include<bits/stdc++.h>
using namespace std;

deque<int> dq;

int main() {

    int num; cin >> num;
    for(int i=0; i< num; i++) {
        int n; cin >> n;
        if(i%2 == 0) dq.push_back(n);
        else if(i%2 == 1) dq.push_front(n);
    }

    cin.ignore();
    string s; getline(cin, s);
    int sum=0;
    int cnt = num;
    for(int i=0; i<s.length(); i++) {
        if(s[i+1] == '\0') {
            sum *= 10;
            sum += s[i] - '0';
            if(cnt%2 == 0) dq.push_back(sum);
            else dq.push_front(sum);
            sum = 0;
            cnt++;
            continue;
        }


        if(s[i] == ' ') {
            if(cnt%2 == 0) dq.push_back(sum);
            else dq.push_front(sum);
            sum = 0;
            cnt++;
        }
        else {
            sum *= 10;
            sum += s[i] - '0';
        }
    }

    int m; 
    // cnt++;
    while(1) {
        cin >> m;
        if(m == -1) break;

        if(cnt%2 == 0) dq.push_back(m);
        else dq.push_front(m);
        cnt++;
    }

    cout << '[';
    for(auto i = dq.begin(); i<dq.end(); i++) {
        if(i != dq.begin()) cout << ", ";
        cout << *i;
    }
    cout << ']';

    return 0;
}