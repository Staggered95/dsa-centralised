#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key, int size) {
    int start = 0;
    int end = size-1;

    while (start <= end)  {
        int mid = (start+end)/2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) start = mid+1;
        else end = mid-1;
    }
    return -1;
}

int main() {

    int arr[5] = {20, 10, 99, 12, 3};
    int val = binarySearch(arr, 3, 5);
    cout << val;

    return 0;
}