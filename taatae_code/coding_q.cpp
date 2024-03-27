#include<bits/stdc++.h>
using namespace std;

int main() {

    int table_size;
    cin >> table_size;

    vector<vector<int>> vec(table_size, vector<int>(table_size, 0));

    int number_of_pillar;
    cin >> number_of_pillar;

    for(int i=0; i<number_of_pillar; i++) {
        int r, c;
        cin >> r >> c;
        vec[r][c] = 1;

        for(int i=0; i<table_size; i++) {
            vec[i][c] = -1;
            vec[r][i] = -1;
        }
    }

    int count=0;
    for(int i=0; i<table_size; i++) {
        for(int j=0; j<table_size; j++) {
            if(vec[i][j] == 0) {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}