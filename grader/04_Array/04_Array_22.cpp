#include<bits/stdc++.h>
using namespace std;
void cut(string str[], int num) {
    deque<string> dq;

    for(int i=0; i<num/2; i++) {
        dq.push_back(str[i]);
    }
    for(int i=num-1; i>=num/2; i--) {
        dq.push_front(str[i]);
    }

    for(int i=0; i<num; i++) {
        str[i] = dq[i];
    }
}

void slices(string str[], int num) {
    queue<string> q1;
    queue<string> q2;

    for(int i=0; i<num; i++) {
        if(i<num/2) q1.push(str[i]);
        else q2.push(str[i]);
    }

    for(int i=0; i<num; i++) {
        if(i%2 == 0) {
            str[i] = q1.front();
            q1.pop();
        }
        else {
            str[i] = q2.front();
            q2.pop();
        }
    }
}


int main() {

    int num; cin >> num;
    string str[num];
    for(int i=0; i<num; i++) {
        cin >> str[i];
    }
    cin.ignore();
    string mode; getline(cin, mode);
    for(auto c: mode) {
        if(c == 'C') cut(str, num);
        else if(c == 'S') slices(str, num);
    }
    cout << "\n";

    for(auto c: str) {
        cout << c << " ";
    }

    return 0;
}