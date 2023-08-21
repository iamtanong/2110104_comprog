#include<bits/stdc++.h>
using namespace std;

int main() {

    int zig_min = INT_MAX, zig_max = INT_MIN, zag_min = INT_MAX,zag_max = INT_MIN;
    int mode;
    for(int i=0; 1; i++) {
        int x; cin >> x;
        if(x == -998 || x == -999) {
            mode = x;
            break;
        }
        int y; cin >> y;

        if(i%2 == 0) {
            zig_min = min(zig_min, x);
            zig_max = max(zig_max, y);

            zag_min = min(zag_min, y);
            zag_max = max(zag_max, x);
        }
        else {
            zig_min = min(zig_min, y);
            zig_max = max(zig_max, x);

            zag_min = min(zag_min, x);
            zag_max = max(zag_max, y);
        }
    }
    
    if(mode == -998) cout << zig_min << " " << zig_max;
    else if(mode == -999) cout << zag_min << " " << zag_max;

    return 0;
}