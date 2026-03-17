#include <bits/stdc++.h>
using namespace std;

class Heap {
  vector<int> heap;

  public:
    int left(int x) { return 2*x + 1; };
    int right(int x) { return 2*x + 2; };
    int parent(int x) { return (x-1)/2; };

    void heapifyUp(int index) {
        while (index > 0 && heap[parent(index)] > heap[index]) {
            swap(heap[index], heap[parent(index)]);
            index = parent(index);
        }
    }

    void insert(int val) {
      heap.push_back(val);
    }
};

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(vector<int>& arr, int n) {
    for (int i=(n/2)-1; i>=0; i--) {
        heapify(arr, n, i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = { 2, 4, 1, 0, 8, 3 };
    buildMaxHeap(arr, arr.size());

    for (int i : arr) cout << i << " ";

    return 0;
}