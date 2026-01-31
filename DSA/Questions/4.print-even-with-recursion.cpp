#include <bits/stdc++.h>
using namespace std;

void printEven(int n) {
    if (n<=1) return;
    printEven(n-1);
    if (n%2==0) {
        cout << n << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    printEven(10);
    cout << endl;

    return 0;
}