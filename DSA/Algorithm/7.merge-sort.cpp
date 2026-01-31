#include <bits/stdc++.h>
using namespace std;

int c = 0;

void print(int arr[], int n) {
    if (c<n-1) cout << "Recursion " << ++c << ": ";
    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid-left + 1;
    int n2 = right - mid;
    //Create array in heap instead of stack
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i<n1; i++) L[i] = arr[left+i];
    for (int i = 0; i<n2; i++) R[i] = arr[mid+i+1];

    int i = 0, j = 0, k = left;
    while (i<n1 && j<n2) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i<n1) {
        arr[k] = L[i];
        k++; i++;
    }
    while (j<n2) {
        arr[k] = R[j];
        j++; k++;
    }

    delete []L;
    delete []R;
}


void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    print(arr, 7);
    merge(arr, left, mid, right);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[7] = {6, 1, 7, 2, -1, 15, 10};
    mergeSort(arr, 0, 7-1);
    cout << "Sorted array: ";
    print(arr, 7);

    return 0;
}