#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    int max_time = INT_MIN;

    int arr[num][2];

    for(int i=0; i<num; i++) {
        cin >> arr[i][0] >> arr[i][1];

        max_time = max(max_time, arr[i][1]);
    }

    int max_cnt = 0;
    for(int time=1; time<max_time; time++) {
        int cnt = 0;
        for(int i=0; i<num; i++) {
            if(arr[i][0] <= time && arr[i][1] > time) {
                cnt++;
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;

    return 0;
}