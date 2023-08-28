#include<bits/stdc++.h>
using namespace std;

int travel(int arr[][3], int num, int now, int go) {

    int minn = INT_MAX, min_index;
    for(int i=0; i<num; i++) {
        int elev_now = arr[i][1];
        int elev_go = arr[i][2];
        
        int distance;
        if(now >= elev_now && now <= elev_go) {
            distance = abs(go - elev_go);
        }
        else {
            distance = abs(now-elev_go) + abs(go-now);
        }

        // elev_travel[i] = distance;
        if(distance == min(minn, distance)) {
            minn = distance;
            min_index = i;
        }

    }
    return min_index;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int num; cin >> num;
    int arr[num][3];
    for(int i=0; i<num; i++) {
        cin >> arr[i][0] >> arr[i][1] >>arr[i][2];
    }
    int m; cin >> m;
    while(m--) {
        int now, go;
        cin >> now >> go;

        int min_index = travel(arr, num, now, go);
        cout << arr[min_index][0] << endl;
    }

    return 0;
}