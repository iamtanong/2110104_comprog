#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    int arr[num];
    for(int i=0; i<num; i++) {
        cin >> arr[i];
    }

    int cnt=0;
    for(int i=1; i< num-1; i++) {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}