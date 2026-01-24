#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j;

    for (i=0; i<n-1; i++) {
        int min_index = i;
        for (j=i+1; j<n; j++) {
            if (arr[j] < arr[min_index]) min_index = j; 
        }
        swap(arr[min_index], arr[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {5, 2, 1, 9, 0};
    selectionSort(arr, 5);

    for (int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}