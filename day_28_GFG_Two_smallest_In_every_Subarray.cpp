class Solution {
  public:
   int pairWithMaxSum(vector<int>& arr) {
        int n = arr.size();
        if(n <= 1) return -1;
        
        int ans = INT_MIN;
        for(int i = 0; i < n-1; i++) ans = max(ans, arr[i] + arr[i+1]);
        return ans;
    }
};
