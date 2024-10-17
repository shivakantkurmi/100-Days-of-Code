class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l=0,cnt=0;
        for (int i =0 ;i<nums.size()-1;i++){
              if (nums[i]<nums[i+1]) cnt++;
              else {
                l=max(l,cnt);
                cnt= 0; 
                }
        }
        l=max(l,cnt);
        return l+1;
    }
};
