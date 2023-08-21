#include<bits/stdc++.h>
using namespace std;

int main() {

    double sum=0, cnt=0;
    while(1) {
        double num; cin >> num;
        if(num == -1) break;
        sum += num;
        cnt++;
    }

    double avg = sum/cnt;
    if(cnt == 0) cout << "No Data";
    else cout << round(avg * 100) / 100;

    return 0;
}