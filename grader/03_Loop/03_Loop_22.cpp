#include<bits/stdc++.h>
using namespace std;

vector<int> vec;

int main() {

    long long num; cin >> num;

    // while (1) {
    //     for(int i=2; i<=num; i++) {
    //         if(num%i == 0) {
    //             num /= i;
    //             vec.push_back(i);
    //             break;
    //         }
    //     }
    //     if(num == 1) break;
    // }
    
    // int j=0;
    // for(auto i : vec) {
    //     if(j>0) cout << "*";
    //     cout << i;
    //     j++;
    // }

    for(int i=2; 1; i++) {
        if(num%i==0) {
            num /= i;
            vec.push_back(i);
            i--;
        }
        if(num == 1) {
            break;
        }
    }

    int j=0;
    for(auto i : vec) {
        if(j>0) cout << "*";
        cout << i;
        j++;
    }
    

    return 0;
}