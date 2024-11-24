class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};
