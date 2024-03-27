#include<bits/stdc++.h>
using namespace std;

int overlap_area(int r1[], int r2[]) {
    int w = min(r1[2], r2[2]) - max(r1[0], r2[0]);
    int h = min(r1[3], r2[3]) - max(r1[1], r2[1]);
    if(w <= 0 or h <= 0) return 0;
    return w*h;
}

main(){
    int num;
    cin>>num;
    int arr[num][4];
    bool check[num][num];

    memset(check, false, sizeof(check));

    int max_num = INT_MIN;

    for(int i=0;i<num;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            
            int sum = overlap_area(arr[i],arr[j]);
            if(sum>0){
                cout<<i<<" "<<j<<" "<<sum<<"\n";
                check[i][j]=!check[i][j];
            }
            
            max_num = max(max_num, sum);
            
        }
    }

    cout<<"Max overlapping area = "<<max_num<<"\n";
    
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(check[i][j]){
                cout<<"rectangles "<<i<<" and "<<j<<"\n";
            }
        }
    }
}