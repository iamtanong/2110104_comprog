#include<bits/stdc++.h>
using namespace std;

int main() {

    double arr[4];
    for(int i=0; i<4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+4);
    double score = (arr[1]+arr[2])/2;

    cout << round(score *100.0)/100.0;

    return 0;
}