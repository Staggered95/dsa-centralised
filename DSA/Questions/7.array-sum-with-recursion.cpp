#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int size) {
    if (size == 0) return 0;
    return arr[0] + arraySum(arr+1, size-1);
}

int main() {

    int arr[] = {10, 21, 34, 10, 6};
    cout << arraySum(arr, 5);


    return 0;
}