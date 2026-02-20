#include <bits/stdc++.h>
using namespace std;


/*
    --> priority queue is a special type of queue where elements are accessed on basis of priority,, not the insertion order
    --> by default it has highest element priority
    --> internally it is implemented using heap (CBT) and max-heap by default largest element will be at the top
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq_max;  //max heap
    priority_queue<int, vector<int>, greater<int>> pq_min;   //min heap

    pq_max.push(10);
    pq_max.push(50);
    pq_max.push(20);
    
    cout << pq_max.size() << endl;

    while (!pq_max.empty()) {
        cout << pq_max.top() << " ";
        pq_max.pop();
    }

    return 0;
}