#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i<n; i++) {
        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {5, 2, 1, 9, 0};
    insertionSort(arr, 5);

    for (int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}