#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void deleteFromStack(stack<int>& s, int count, int size) {
        if (s.empty() || count==size/2) {
            s.pop();
            return;
        }

        int temp = s.top();
        s.pop();
        deleteFromStack(s, count+1, size);
        s.push(temp);
    }

    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        int count = 0;
        deleteFromStack(s, count, s.size());

    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}