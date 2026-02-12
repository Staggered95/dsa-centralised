vector<int> nextSmaller(vector<int>& v) {
    int n = v.size();
    stack<int> st;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() >= v[i]) {
            st.pop();
        }

        if (st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());

        st.push(v[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
