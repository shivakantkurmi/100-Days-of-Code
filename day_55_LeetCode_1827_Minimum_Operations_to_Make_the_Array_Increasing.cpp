class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return 0;
        int ans = 0 ;
        for (int i = 0 ; i<n-1 ; i++){
            if ( nums[i]>=nums[i+1]) {
                int d=nums[i]-nums[i+1]+1;
                nums[i+1]+=d;
                ans+=d;
            }
        }
        return ans;
    }
};
