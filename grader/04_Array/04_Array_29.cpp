#include<bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> vec;

int overlap_area(int r1[], int r2[]) {
    int w = min(r1[2], r2[2]) - max(r1[0], r2[0]);
    int h = min(r1[3], r2[3]) - max(r1[1], r2[1]);
    if(w <= 0 || h <= 0) return 0;
    return w*h;
}

int main() {

    int num; cin >> num;
    int arr[num][4];
    for(int i=0; i<num; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }
    int maxx = 0;
    for(int i=0; i<num; i++) {
        for(int j=i+1; j<num; j++) {
            int area = overlap_area(arr[i], arr[j]);
            vec.push_back(make_tuple(area, i, j));
            maxx = max(maxx, area);
        }
        
    }
    if(maxx == 0) {
        cout << "No overlaps";
        return 0;
    }
    else 
    cout << "Max overlapping area = " << maxx << endl;
        for(auto i : vec) {
            if(get<0>(i) == maxx)
                cout << "rectangles " << get<1>(i) << " and " << get<2>(i) << endl;
        }
    

    return 0;
}