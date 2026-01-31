#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool isPresent(int arr[][2], int n, int m, int k) {
            for (int i=0; i<n*m; i++) {
                int row = i/m;
                int col = i%m;
                if (arr[row][col] == k) return true;
            }
            return false;
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3][2] = {1, 2, 3, 4, 5, 6};
    Solution s;

    cout << boolalpha << s.isPresent(arr, 3, 2, 6);
    return 0;
}