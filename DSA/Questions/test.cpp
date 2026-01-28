#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int cur_sum = 0;

        for (int i=0; i<k; i++) {
            cur_sum += arr[i];
        }

        int max_sum = cur_sum;

        for (int i=k; i<n; i++) {
            cur_sum = cur_sum + arr[i] - arr[i-k];
            if (cur_sum > max_sum) max_sum = cur_sum;
        }
        return max_sum;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    for (int i=0; i<2000; i++) {
        v.push_back((rand()%3000));
    }
    v.push_back(8);
    for (int i=0; i<3000; i++) {
        v.push_back((rand()%3000));
    }
    cout << binarySearch(v, 8) << endl;

    return 0;
}