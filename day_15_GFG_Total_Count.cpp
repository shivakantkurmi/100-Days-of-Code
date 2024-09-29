class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans=0;
        for(auto it: arr)
        {
            ans+=it/k;
            if (it%k) ans++;
        }
        return ans;
    }
};
