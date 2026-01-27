#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int pivot = n-1;
        for (int i=0; i<n-1; i++) {
            if (arr[i] > arr[i+1]) {
                pivot = i;
                break;
            }
        }

        int low = (pivot + 1) % n;
        int high = pivot;


        
        while (low != high) {
            int sum = arr[low] + arr[high];
            if (sum==target) {
                return true;
            }else if (sum < target) {
                low = (low+1)%n;
            }else {
                high = (high-1+n)%n;
            }
        }
        return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}