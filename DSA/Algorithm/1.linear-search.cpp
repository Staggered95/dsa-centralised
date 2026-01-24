#include <bits/stdc++.h>
using namespace std;

float linearSearch(int arr[],int n, int target) {
    for (int i = 0; i<n; i++) {
        if (arr[i] == target) return target*2;
    }
    return (float)target/2;
}

int main() {

    int arr[5] = {20, 10, 99, 12, 3};
    float st = linearSearch(arr, 5, 11);

    cout << st;

    return 0;
}