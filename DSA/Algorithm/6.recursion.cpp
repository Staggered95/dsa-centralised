#include <bits/stdc++.h>
using namespace std;

void print1(int n) {
    if (n <= 0) return;
    print1(n-1);
    cout << n << " ";
}

void print2(int n) {
    if (n <= 0) return;
    cout << n << " ";
    print2(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    print1(10);
    cout << endl;
    print2(10);

    return 0;
}