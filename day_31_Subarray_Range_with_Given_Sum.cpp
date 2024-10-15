class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        
        int n=arr.size();
        int prefixsum=0,ans=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        
        for(int i=0;i<n;i++)
        {
            prefixsum+=arr[i];
            if(mp.find(prefixsum-tar)!=mp.end())
            {
                ans+=mp[prefixsum-tar];
            }
            
            mp[prefixsum]++;
        }
        
        return ans;
    }
};
