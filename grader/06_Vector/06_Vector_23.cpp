#include<bits/stdc++.h>
using namespace std;

vector<tuple<double, int, double, double>> vec;

int main() {

    int num; cin >> num;
    int i=1;
    while(num--) {
        double x, y;
        cin >> x >> y;

        double distant = sqrt(pow(x, 2) + pow(y, 2));
        vec.push_back(make_tuple(distant, i, x, y));

        i++;
    }
    sort(vec.begin(), vec.end());
    auto tup = vec[2];
    cout << "#" << get<1>(tup) <<": (" << get<2>(tup) << ", " << get<3>(tup) << ")" << endl;

    return 0;
}