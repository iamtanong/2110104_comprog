#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    int arr[num], corner[2][num];

    for(int i=0; i<num; i++) {
        cin >> arr[i];
        if(i == 0) corner[0][i] = arr[i];
        else corner[0][i] = max(corner[0][i-1], arr[i]);
    }
    for(int i=num-1; i>=0; i--) {
        if(i == num-1) corner[1][i] = arr[i];
        else corner[1][i] = max(corner[1][i+1], arr[i]);
    }

    int total = 0;

    for(int i=1; i<num-1; i++) {
        total += min(corner[0][i], corner[1][i])-arr[i];
    }
    cout << total;


    return 0;
}