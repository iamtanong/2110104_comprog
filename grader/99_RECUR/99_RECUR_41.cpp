#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> vec;
vector<int> path;
set<vector<int>> all_paths;

bool ck = false;

void find_path(int start, int end) {
    if(start == end) {
        path.push_back(end);
        ck = true;

        all_paths.insert(path);

        path.pop_back();
        return ;
    }

    for(auto i : vec) {
        

        if(i.first == start) {
            path.push_back(i.first);
            find_path(i.second, end);
            path.pop_back();
        }
        else {
            
        }
    }
}

int main() {

    int num, start, end;
    cin >> num >> start >> end;
    while(num--) {
        int s, e;
        cin >> s >> e;
        vec.push_back({s, e});
    }
    sort(vec.begin(), vec.end());
    find_path(start, end);

    if(all_paths.size() == 0) {
        cout << "no";
    }
    else
        for(auto v : all_paths) {
            bool ck=false;
            for(auto i : v) {
                if(ck) cout << " -> ";
                cout << i;
                ck = true;
            }
            cout << endl;
        }

    return 0;
}