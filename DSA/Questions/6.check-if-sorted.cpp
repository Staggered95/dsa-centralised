#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size == 0 || size == 1) return true;
    if (arr[0] > arr[1]) return false;
    return isSorted(arr+1, size-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1, 2, 3, 7, 5};
    string s = isSorted(arr, 5) ? "It's sorted" : "It's not sorted";
    cout << s;

    return 0;
}