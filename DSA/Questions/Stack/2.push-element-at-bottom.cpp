#include <bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int>& st, int count, int size, int val) {
    if (st.empty() || count == size) {
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    pushAtBottom(st, count+1, size,val);
    st.push(temp);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> st;
    st.push(1); st.push(2); st.push(3);

    pushAtBottom(st, 0, st.size(), 10);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}