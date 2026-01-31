#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int key) {
    if (size == 0) return -1;
    if (arr[0] == key) return 0;
    int index = search(arr+1, size-1, key);
    return index == -1 ? -1 : index+1;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1,3,4,8};
    cout << search(arr, 4, 8);

    return 0;
}