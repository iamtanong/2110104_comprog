#include<bits/stdc++.h>
using namespace std;

int main() {

    int eye_x, eye_y; cin >> eye_x >> eye_y;
    int eye_radius, p_radius; cin >> eye_radius >> p_radius;
    int mouse_x, mouse_y; cin >> mouse_x >> mouse_y;

    double mouse_distant = sqrt(pow(eye_x-mouse_x, 2) + pow(eye_y-mouse_y, 2));
    double main_ratio = (eye_radius-p_radius) / mouse_distant;

    double p_x, p_y;
    p_x = (main_ratio * (mouse_x - eye_x)) + eye_x;
    p_y = (main_ratio * (mouse_y - eye_y)) + eye_y;

    cout << round(p_x) << " " << round(p_y);

    return 0;
}