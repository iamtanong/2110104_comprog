#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    double sum_g=0, sum_kit=0;;
    for(int i=0; i<num; i++) {
        string s; cin >> s;
        int kit; cin >> kit;

        double j=0;
        if(s == "A") {
            j = 4.0;
        }
        else if(s == "B+") {
            j = 3.5;
        }
        else if(s == "B") {
            j = 3.0;
        }
        else if(s == "C+") {
            j = 2.5;
        }
        else if(s == "C") {
            j = 2.0;
        }
        else if(s == "D+") {
            j = 1.5;
        }
        else if(s == "D") {
            j = 1.0;
        }
        else if(s == "F") {
            j = 0.0;
        }

        sum_g += j*kit;
        sum_kit += kit;
    }
    double gpa = sum_g/sum_kit;
    cout << round(gpa*100.0)/100;

    return 0;
}