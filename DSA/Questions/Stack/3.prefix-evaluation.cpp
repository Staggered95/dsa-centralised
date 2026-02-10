#include <bits/stdc++.h>
using namespace std;

int prefixEvaluation(string s) {
    stack<int> st;
    for (int i=s.length()-1; i>=0; i--) {
        char curr = s[i];
        if (isdigit(curr)) {
            st.push((curr-'0'));
        } else {
            int second = st.top(); st.pop();
            int first = st.top(); st.pop();

            switch (curr) {
                case '+':
                    st.push(first+second);
                    break;
                case '-':
                    st.push(first-second);
                    break;
                case '*':
                    st.push(first*second);
                    break;
                case '/':
                    st.push(first/second);
                    break;
                default:
                    cout << "No matching operator\n";
                    return -1;
            }
        }
    }

    return st.top();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string expression = "+-/345*67";
    cout << prefixEvaluation(expression);

    return 0;
}