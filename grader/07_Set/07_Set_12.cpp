#include<bits/stdc++.h>
using namespace std;

set<int> s;

int main() {

        int num;
        while (cin >> num) {
            int before = s.size();
            s.insert(num);

            if(s.size() == before) {
                cout << before+1;
                return 0;
            }
        }
        cout << -1;
        

    return 0;
}