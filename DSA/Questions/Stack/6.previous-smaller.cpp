vector<int> previousSmaller(vector<int>& v) {
    int n = v.size();
    stack<int> st;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= v[i]) {
            st.pop();
        }

        if (st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());

        st.push(v[i]);
    }

    return ans;
}
