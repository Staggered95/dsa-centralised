#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    stack<string> st;
    string ans = "";
    int i = 0;
    int j = 0;

    while (j<str.length()) {
        while (str[j] != ' ' && j<str.length()) j++;
        st.push(str.substr(i, j-i));
        j++;
        i=j;
    }
    while (!st.empty()) {
        ans.append(st.top());
        ans.append(" ");
        st.pop();
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << reverseString("Hello how are you?");

    return 0;
}