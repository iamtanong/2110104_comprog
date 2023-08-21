#include<bits/stdc++.h>
using namespace std;

int main() {

    string A_name, B_name;
    double A_pax, B_pax;
    string A_com, B_com, A_cal1, B_cal1, A_cal2, B_cal2;
    cin >> A_name >> A_pax >> A_com >> A_cal1 >> A_cal2;
    cin >> B_name >> B_pax >> B_com >> B_cal1 >> B_cal2;

    // First Condition
    if(A_cal1[0]-'A' >2 || A_cal2[0]-'A' >2 || B_cal1[0]-'A' >2 || B_cal2[0]-'A' >2 || A_com[0]-'A' >0 || B_com[0]-'A'>0) {
        if((A_cal1[0]-'A' >2 || A_cal2[0]-'A' >2 || A_com[0]-'A' >0) && (B_cal1[0]-'A' >2 || B_cal2[0]-'A' >2 || B_com[0]-'A'>0) ){
            cout << "None";
        }
        else if(B_cal1[0]-'A'>2 || B_cal2[0]-'A'>2 || B_com[0]-'A'>0){
            cout << A_name;
        }
        else if(A_cal1[0]-'A'>2 || A_cal2[0]-'A'>2 || A_com[0]-'A'>0) {
            cout << B_name;
        }
    }
    else { // Both pass First Condition
        if(A_pax != B_pax) {
            if(A_pax > B_pax) cout << A_name;
            else cout << B_name;
        }
        else { // A_pax == B_pax
            if(A_cal1[0]-'A' != B_cal1[0]-'A') {
                if(A_cal1[0]-'A' < B_cal1[0]-'A') cout << A_name;
                else cout << B_name;
            }
            else { // A_cal1 == Bcal1
                if(A_cal2[0]-'A' != B_cal2[0]-'A') {
                    if(A_cal2[0]-'A' < B_cal2[0]-'A') cout << A_name;
                    else cout << B_name;
                }
                else { // Both are equal
                    cout << "Both";
                }
            }
        }
    }

    return 0;
}