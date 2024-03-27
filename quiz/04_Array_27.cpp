#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    int arr[2][num];
    for(int i=0; i< num; i++) {
        cin >> arr[0][i] >> arr[1][i];
    }
    string mode; cin >> mode;
    int minn = INT_MAX, maxx = INT_MIN;
    for(int i=0; i<num; i++) {
        if(mode == "Zig-Zag"){
            minn = min(minn, arr[i%2][i]);
            maxx = max(maxx, arr[!(i%2)][i]);
        }
        else if(mode == "Zag-Zig") {
            minn = min(minn, arr[!(i%2)][i]);
            maxx = max(maxx, arr[i%2][i]);
        }
    }
    
    cout << minn << " " << maxx << endl;

    return 0;
}