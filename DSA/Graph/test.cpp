#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(int arr1[], int arr2[]) {
        int sum1 = 0;
        int sum2 = 0;
        for (int i=0; i<26; i++) {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }

        return sum1 == sum2;
    }

    bool checkInclusion(string s1, string s2) {
            int l1 = s1.length();
            int l2 = s2.length();
            int arr1[26] = {0};
            int arr2[26] = {0};

            for (int i=0; i<l1; i++) {
                arr1[s1[i] - 'a']++;
            }

            int left = 0;
            int right = 0;

            for (right=0; right<l1; right++) {
                if (arr1[s2[right]-'a'] != 0) {
                    arr2[s2[right]-'a']++;
                }
            }

            if (check(arr1, arr2)) return true;

            right++;

            while (right < l2) {
                arr2[s2[left] - 'a']--;
                if (arr2[s2[left] - 'a'] < 0) arr2[s2[left] - 'a'] = 0;
                left++;
                arr2[s2[right] - 'a']++;
                if (check(arr1, arr2)) return true;
                right++;
            }

            return false;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution s;
    cout << boolalpha << s.checkInclusion("abc", "bbcbcahj");

    return 0;
}