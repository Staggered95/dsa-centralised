class Solution {
  public:
    string firstRepChar(string s) {
        vector<bool> vec(26, false);
        string ans = "";

        for (char ch : s) {
            if (!vec[ch-'a']) {
                vec[ch-'a'] = true; 
            } else {
                ans += ch;
                return ans;
            }
        }

        return "-1";

    }
};