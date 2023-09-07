#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], sorted_arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    sort(sorted_arr, sorted_arr + n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    for (int i = n-1; i >= 0; i--) {
        // initial tmp array
        int tmp[n];
        for (int j = 0; j < n; j++) tmp[j] = arr[j];

        // cout << "TESTSTT : " << sorted_arr[i] << " == " << arr[i] << endl; 
        
        if (sorted_arr[i] == arr[i]) continue;
        else {
            if (arr[0] != sorted_arr[i]) {
                    int index = -1;
                
                for (int j = 0; j <= i; j++) {
                    if (arr[j] == sorted_arr[i]) index = j;
                }

                // Flip Big Pancake to top
                tmp[0] = arr[index];
                for (int j = 1; j <= index; j++) tmp[j] = arr[index - j];
                // print Pancake
                for (int j = 0; j < n; j++) {
                    arr[j] = tmp[j];
                    cout << arr[j] << " ";
                }
                cout << "\n";
            }
            

            // Flip Big Pancake to bottom
            tmp[i] = arr[0];
            for (int j = 0; j < i; j++) tmp[j] = arr[i-j];
            // print Pancake
            for (int j = 0; j < n; j++) {
                arr[j] = tmp[j];
                cout << arr[j] << " ";
            }
            cout << "\n";

        }
    }
}