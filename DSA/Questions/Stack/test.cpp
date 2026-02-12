class Solution {
  public:
    void solve(queue<int>& q, stack<int>& st1, stack<int>& st2) {
      if (st2.empty()) return;
      int a = st1.top(); st1.pop();
      int b = st2.top(); st2.pop();
      solve(q, st1, st2);
      q.push(a);
      q.push(b);
    }
    
    void rearrangeQueue(queue<int> &q) {
        // code here
        stack<int> st1, st2;
        int half = q.size()/2;

        for (int i=0; i<half; i++) {
          st1.push(q.front());
          q.pop();
        }
        
        while (!q.empty()) {
          st2.push(q.front());
          q.pop();
        }

        solve(q, st1, st2);
    }
};