class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size(),sum=accumulate(nums.begin(),nums.end(),0);
        vector<int> ans(n),lsum(n),rsum(n);
        lsum[0]=0;
        rsum[0]=sum-nums[0];
        ans[0]=abs(lsum[0]-rsum[0]);
        for(int i=1  ; i<n ; i++){
            lsum[i]=lsum[i-1]+nums[i-1];
            rsum[i]=sum-(lsum[i]+nums[i]);
            ans[i]=abs(lsum[i]-rsum[i]);
        }
        return ans;
    }
};
