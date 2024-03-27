#include<bits/stdc++.h>
using namespace std;

int mem1[999] = {0};
int mem2[999] = {0};


int max_mem1() {
    int maxx = INT_MIN;
    for(int i=0; i<999; i++) {
        maxx = max(maxx, mem1[i]);
    }
    return maxx;
}

int max_mem2() {
    int maxx = INT_MIN;
    for(int i=0; i<999; i++) {
        maxx = max(maxx, mem2[i]);
    }
    return maxx;
}

int main() {

    string s1, s2;
    cin >> s1 >> s2;

    for(unsigned long int i=0; i<s2.length(); i++) {
        for(unsigned long int j=0; j<s1.length(); j++) {
            if(i+j > s2.length()) continue;
            if(s2[i+j] == s1[j]) mem1[i]++;
        }
    }
    for(unsigned long int i=0; i<s1.length(); i++) {
        for(unsigned long int j=0; j<s2.length(); j++) {
            if(i+j > s1.length()) continue;
            else if(s1[i+j] == s2[j]) mem2[i]++;
        }
    }

    int max1 = max_mem1(), max2 = max_mem2();
    if(max1 >= max2) {
        for(int i=0; i<999; i++) {
            if(mem1[i] != max1) cout << '-';
            else break;
        }
        cout << s1 << endl << s2 << endl << max1;
    }
    else {
        cout << s1 << endl;
        for(int i=0; i<999; i++) {
            if(mem2[i] != max2) cout << '-';
            else break;
        }
        cout << s2 << endl << max2;
    }

    // cout << max_mem1();
    // cout << '\n';
    // // for(auto i : mem1) cout << i << " ";
    // cout << endl << max_mem2();
    // cout << '\n';
    // for(auto i : mem2) cout << i << " ";

    

    return 0;
}