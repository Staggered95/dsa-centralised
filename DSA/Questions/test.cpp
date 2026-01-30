#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.end(), nums.begin(), nums.end());
        int c = 0;

        for (int i=0; i<n; i++) {
            if (nums[i] == 1) c++;
        }

        n = nums.size();
        int cur_sum = 0;
        int max_sum = 0;

        for (int i=0; i<c; i++) {
            cur_sum += nums[i];
        }

        for (int i=c; i<n; i++) {
            cur_sum = cur_sum + nums[i] - nums[i-c];
            max_sum = max(max_sum, cur_sum);
        }

        return c-max_sum;
    }
};


int main() {
    srand(time(nullptr)); 
    vector<int> v;
    int k;
    for (int i=0; i<120000; i++) {
        k = rand()%2==0 ? 0 : 1;
        v.push_back(k);
    }
    
    Solution s;
    cout << s.minSwaps(v);

    return 0;
}