class Solution {
  public:
    int precedance(char x) {
        if (x == '+' || x == '-') return 1;
        if (x == '*' || x == '/') return 2;
        if (x == '^') return 3;
        return 0;
    }  

    string infixToPostfix(string& s) {
        // code here
        string ans = "";
        stack<char> st;

        for (int i=0; i<s.length(); i++) {
            char curr = s[i];

            if (isalnum(curr)) {
                ans += curr;
            } else if (curr == '(') {
                st.push(curr);
            } else if (curr == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            } else {
                while (!st.empty() && (precedance(st.top()) >= precedance(curr)) && (curr != '^')) {
                    ans += st.top();
                    st.pop();
                }
                st.push(curr);
            }
        }
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
