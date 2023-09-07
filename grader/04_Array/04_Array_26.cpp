#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    int arr_size = (num*num)-1;
    int arr[arr_size];
    int space_line;
    
    for(int i=0; i<arr_size; i++) {
        int n; cin >> n;
        if(n==0) {
            space_line = i/num;
            i--;
        }
        else arr[i] = n;
    }

    int inversion = 0;
    for(int i=0; i<arr_size; i++) {
        for(int j=i+1; j<arr_size; j++) {
            cout << '(' << arr[i] << ',' << arr[j] << ") ";
            if(arr[i] > arr[j]) inversion++;
        }
    }
    cout << endl << space_line << " " << inversion << endl;

    if(num%2 == 0) {
        if((inversion%2 == 0 && space_line%2 == 1) || (inversion%2 ==  1 && space_line%2 == 0)) {
            cout << "YES";
        }
        else cout << "NO";
    }
    else {
        if(inversion%2 == 0) cout << "YES";
        else cout << "NO";
    }

    return 0;
}