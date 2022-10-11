class KthLargest {
public:
   int K;
    priority_queue<int, vector<int>, greater<int>> q;

    KthLargest(int k, vector<int>& nums) {
        K = k;
        for (int n : nums) q.push(n);
    }
 
    int add(int val) {
        q.push(val);
        while (q.size() > K) q.pop();
        return q.top();
    }
};
