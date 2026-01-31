#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3][4];

    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            cin >> arr[j][i];
        }
    }
    cout << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}