#include <bits/stdc++.h>
using namespace std;

void permute(string& s, int index) {
    if (index == s.size()) {
        cout << s << " ";
    }
    for (int i=index; i<s.size(); i++) {
        swap(s[index], s[i]);
        permute(s, index+1);
        swap(s[index], s[i]);
    }
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "tree";
    permute(s, 0);

    return 0;
}