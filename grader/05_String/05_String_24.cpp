#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    string substr1, substr2;
    string c1, c2;

    for(int i=0; i< str.length(); i++) {
        if(!(i==0 || str[i-1] != ' ')) continue;
        
        int j=i+1;
        c1.push_back(str[i]);
        for(; str[j] != '\0'; j++) {
            if(str[j] == ' ') {
                substr2.clear();
                break;
            }
            else {
                if(str[j] == 'h' && (str[i] == 'c' || str[i] == 'k' || str[i] == 'p')) {
                    if(i==0) c1.push_back(str[i]);
                    else c2.push_back(str[i]);

                    continue;
                }
                else if(i==0) {
                    substr1.push_back(str[j]);
                }
                else {
                    substr2.push_back(str[j]);
                }
            }
        }
        // i += j;
    }
    cout << c1 << substr1 << "\n" << c2 << substr2 << endl;

    return 0;
}