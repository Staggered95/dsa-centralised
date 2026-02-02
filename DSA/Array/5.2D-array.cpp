#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3][3] = {1, 4, 9, 16, 25, 36, 49, 64, 81};

    int max_sum = INT_MIN;
    int index = -1;

    for (int j=0; j<3; j++) {
        int sum = 0;
        for (int i=0; i<3; i++) {
            sum += arr[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            index = j;
        }
    }

    cout << max_sum << " " << index << endl;

    return 0;
}