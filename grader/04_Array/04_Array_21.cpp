#include<bits/stdc++.h>
using namespace std;

double fraction(int arr[], double fr[], int i) {
    if(i == 0) return arr[0];
    return (1.0 / arr[i]) + fraction(arr, fr, i-1);
}


int main() {

    int num; cin >> num;
    int arr[num];
    double crr[num];
    for(int i=0; i<num; i++) {
        cin >> arr[i];
        double fr[i];

        crr[i] = fraction(arr, fr, i);
        
        cout << setprecision(10) << crr[i] << endl;
    }


    return 0;
}