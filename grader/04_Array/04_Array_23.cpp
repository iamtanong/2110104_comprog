#include<bits/stdc++.h>
using namespace std;

int main() {

    int num; cin >> num;
    string db[num][2];
    for(int i=0; i<num; i++) {
        cin >> db[i][0] >> db[i][1];
    }
    cin.ignore();
    string path; getline(cin, path);

    string start = "\0", stop = "\0";
    bool ck=false;
    int total=0;

    for(int i=0; i<path.length(); i++) {
        if(path[i] == '-') {
            ck=true;
            continue;
        }

        if(ck && path[i] != ' ') {
            stop.push_back(path[i]);
        }

        if(path[i] == ' ' || path[i+1] == '\0') {
            ck=false;

            if(start == "\0") {
                start = stop;
                stop.clear();
            }
            else if(start != stop) {
                start = stop;
                stop.clear();
                for(int j=0; j<num; j++) {
                    if(start == db[j][0]) {
                        total += stoi(db[j][1]);
                        break;
                    }
                }
            }
            else {
                start = stop;
                stop.clear();
            }

            continue;
        }
    }

    cout << total;

    return 0;
}