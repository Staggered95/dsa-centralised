#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3][3] = {1, 4, 9, 16, 25, 36, 49, 64, 81};

    for (int j=0; j<3; j++) {
        if (j%2==0) {
            for (int i=0; i<3; i++) {
                cout << arr[i][j] << " ";
            }
        }else {
            for (int i=3-1; i>=0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}