#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[(index - 1) / 2] > heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    

    public:
        void insert(int value) {
            heap.push_back(value);
            heapifyUp(heap.size() - 1);
        }

        void deleteAtIndex(int index) {
    if (index < 0 || index >= heap.size()) return; // Invalid index
    if (index == heap.size() - 1) { heap.pop_back(); return; }

    heap[index] = heap.back();
    heap.pop_back();

    if (index < heap.size()) { // If not empty after pop
        // Decide whether to heapifyUp or heapifyDown
        if (index > 0 && heap[(index - 1) / 2] > heap[index]) {
            heapifyUp(index);
        } else {
            heapifyDown(index);
        }
    }
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}