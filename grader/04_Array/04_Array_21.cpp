#include<bits/stdc++.h>
using namespace std;


int main() {

    int num; cin >> num;
    int arr[num];
    for(int i=0; i<num; i++) {
        cin >> arr[i];
        double frac=0;
        for(int j=i; j>=0; j--) {
            if(j == 0) {
                frac += arr[0];
            }
            else if(j == i) {
                frac = 1.0 / arr[j];
            }
            else {
                frac += arr[j];
                frac = 1.0 / frac;
            }
        }
        cout << setprecision(10) << frac << endl;
    }


    return 0;
}