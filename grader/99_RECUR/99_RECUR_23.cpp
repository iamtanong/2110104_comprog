#include <iostream>
#include <map>
using namespace std;

int F(int n) {
    // Fibonacci number
    if(n == 0) return 0;
    if(n == 1) return 1;
    return 2*F(n-1) + F(n);
}

int M(int n) {
    // Motzkin number
}

int S(int n) {
    // Schröder–Hipparchus Number
}

int D(int n) {
    // Derangement
}

int main() {
    map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}
