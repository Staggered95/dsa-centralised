#include <bits/stdc++.h>
using namespace std;

vector<int> right(vector<int> &vec) {
  // 7, 1, 7, 2, 2, 4
  int n = vec.size();
  vector<int> ans(n, -1);
  stack<pair<int, int>> st;
  st.push({vec[n - 1], n - 1});

  for (int i = n - 2; i >= 0; i) {
    int currVal = vec[i];
    int currIndex = i;
    while (!st.empty() && currVal <= st.top().first)
      st.pop();
    if (!st.empty())
      ans.push_back(currVal, st.top().second);
  }

  return ans;
}

int main() { vector<int> = {7, 1, 7} }
