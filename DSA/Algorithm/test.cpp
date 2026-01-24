#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> v) {
    int n = v.size();
    sort(v.begin(), v.end());
    vector<vector<int>> result;

    for (int i=0; i<n-2; i++) {
        if (i>0 && v[i]==v[i-1]) continue;

        int left = i+1;
        int right = n-1;

        while (left < right) {
            int sum = v[i] + v[left] + v[right];
            if (sum == 0) {
                result.push_back({v[i], v[left], v[right]});

                while (left<right && v[left]==v[left+1]) left++;
                while (left<right && v[right]==v[right-1]) right--;
                left++;
                right--;
            } else if (sum<0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> input(3000);
    for (int i = 0; i < 3000; i++)
        input[i] = rand() % 2000 - 1000;

    vector<vector<int>> res = threeSum(input);

    for (vector<int> i : res) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    

    return 0;
}