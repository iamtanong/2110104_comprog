#include<bits/stdc++.h>
using namespace std;

int main() {

    int w, h;
    cin >> w >> h;
    double arr[w][h];
    for(int i=0; i<w; i++) {
        for(int j=0; j<h; j++) {
            cin >> arr[i][j];
        }
    }

    double avg[w][h];

    for(int i=1; i<w-1; i++) {
        for(int j=1; j<h-1; j++) {
            double sum =    (arr[i-1][j-1]   + arr[i-1][j]   + arr[i-1][j+1]) + 
                            (arr[i][j-1]     + arr[i][j]     + arr[i][j+1]) + 
                            (arr[i+1][j-1]   + arr[i+1][j]   + arr[i+1][j+1]);

            avg[i][j] = sum/9.0;

            cout << round(avg[i][j] * 100)/100.0 << " ";
        }
        cout << endl;
    }

    return 0;
}