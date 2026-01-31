#include <bits/stdc++.h>
using namespace std;

//take a pivot and keep placing it to its correct position
//correct position will be where all other values less than pivot are on left

int c = 0;

void print(int arr[], int n) {
    if (c<n-1) cout << "Recursion " << ++c << ": ";
    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start+1; i<=end; i++) {
        if (arr[i] < pivot) count++;
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;
    while (i<pivotIndex && j>pivotIndex) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        swap(arr[i], arr[j]);
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    if (start >= end) return;
    int p = partition(arr, start, end);
    print(arr, 7);
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[7] = {7, 6, 5, 4, 3, 2, 7};
    quickSort(arr, 0, 7-1);
    cout << "Sorted array: ";
    print(arr, 7);

    return 0;
}