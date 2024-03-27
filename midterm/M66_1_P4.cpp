#include<bits/stdc++.h>
using namespace std;

vector<long long> vec;

int main() {

    for(long long i=2; i*i<=1e5; i++) {
        bool ck = true;
        for(long long j=2; j*j<=i; j++) {
            if(i%j == 0) {
                ck=false;
                break;
            }
        }
        if(ck) vec.push_back(i);
    }

    int num; cin >> num;

    while(num--) {
        int x, a, y, b;
        cin >> x >> a >> y >> b;

        long long int rle = 0;
        for(int i=0; i<a+b; i++) {
            rle *= 10;
            if(i<a) {
                rle += x;
            }
            else {
                rle += y;
            }
        }

        bool ck = true;
        int last_digit = rle%10;
        if(last_digit % 2 == 0 || last_digit == 5) ck = false;
        else {
            for(int i=0; i<vec.size() && rle > vec[i]; i++) {
                if(rle%vec[i] == 0) {
                    ck = false;
                    break;
                }
            }
        }

        if(ck) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}