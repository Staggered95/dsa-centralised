#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float p, r, t;
    cin >> p >> r >> t;

    float si = (p*r*t)/100;

    cout << "SI: " << si << endl;

    if (si > p/2) {
        cout << "Tax Applicable";
    } else {
        cout << "Tax Not Applicable";
    }

    return 0;
}