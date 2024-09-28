class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,1e5);
        dp[0]=0;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=i-k;j--){
                if(j>=0) dp[i]=min(dp[i],dp[j]+abs(arr[j]-arr[i]));
            }
        }
        return dp[n-1];
    }
};
