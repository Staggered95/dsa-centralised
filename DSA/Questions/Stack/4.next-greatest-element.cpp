#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& v) {
    int n = v.size();
    stack<int> st;
    vector<int> ans;

    for (int i=n-1; i>=0; i--) {
        //remove all elements smaller or equal to current element
        while (!st.empty() && st.top() <= v[i]) {
            st.pop();
        }

        if (st.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(st.top());
        }

        st.push(v[i]);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = { 2, 4, 9, 1, 10, 3, 6};
    vector<int> ans = nextGreaterElement(v);
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}