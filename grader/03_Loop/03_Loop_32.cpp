#include<bits/stdc++.h>
using namespace std;

int get_score(char c) {
    if(c == 'R') return 1;
    else if(c == 'Y') return 2;
    else if(c == 'G') return 3;
    else if(c == 'N') return 4;
    else if(c == 'B') return 5;
    else if(c == 'P') return 6;
    else if(c == 'K') return 7;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int num; cin >> num;
    cin.ignore();

    while(num--) {
        string str; getline(cin, str);
        bool ck = true;
        bool ck2 = false;
        int score = 0;
        int last_r_index = -1;
        for(int i=0; i<str.length(); i+=2) {
            if(str[0] != 'R' || (i>=2 &&str[i] == 'R' && str[i-2] == 'R')) {
                ck = false;
                break;
            }
            if((i - last_r_index) - 2 >2 && str[i] == 'R') {
                ck2=true;
                break;
            }
            if(str[i] == 'R') {
                score += get_score(str[i]);
                last_r_index = i;
                ck = true;
                ck2 = false;
            }
            if((str[i] == 'Y' || str[i] == 'G' || str[i] == 'N' || str[i] == 'B' || str[i] == 'P' 
                || str[i] == 'K') && str[i-2] == 'R') {
                score += get_score(str[i]);
                ck = true;
                ck2 = false;
            }

            int a = (i - last_r_index) - 2;

            if(last_r_index != -1 && a >=2) {
                char ch[] = {'\0', 'Y', 'G', 'N', 'B', 'P', 'K'};
                if(str[i] != ch[a/2]) {
                    ck = false;
                    break;
                }
                else {
                    score += get_score(str[i]);
                    ck = true;
                }
            }
            
        }

        if(ck && !ck2) cout << score << '\n';
        else cout << "WRONG_INPUT\n";
    }

    return 0;
}