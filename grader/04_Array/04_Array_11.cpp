#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; getline(cin, s);
    int arr[2][10] = {  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} } ;
    for(auto i: s) {
        int num = i - '0';
        if(num >= 0 && num <= 9) {
            arr[1][num] = 1;
        }
    }

    int cnt=0;
    for(int i=0; i<10; i++) {
        if(arr[1][i] == 0) {
            if(cnt>0) cout << ",";
            cout << arr[0][i];
            cnt++;
        }
    }

    if(cnt==0) cout << "None";

    return 0;
}