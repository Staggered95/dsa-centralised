#include <bits/stdc++.h>
using namespace std;

int longestEqual01(vector<int>& arr) {
    unordered_map<int, int> firstIndex;
    int sum = 0, maxLen = 0;

    firstIndex[0] = -1;

    for (int i = 0; i < arr.size(); i++) {
        sum += (arr[i] == 0 ? -1 : 1);

        if (firstIndex.count(sum)) {
            maxLen = max(maxLen, i - firstIndex[sum]);
        } else {
            firstIndex[sum] = i;
        }
    }

    return maxLen;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {1, 1, 0, 0, 0, 1, 1};
    cout << longestEqual01(v);

    return 0;
}