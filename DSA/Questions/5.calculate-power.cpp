#include <bits/stdc++.h>
using namespace std;

int calculatePower(int x, int n) {
    if (n==1) return x;
    return x*calculatePower(x, n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << calculatePower(5, 3);

    return 0;
}