class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        set<float> ans;
        sort(nums.begin(),nums.end());
        int left=0,right=n-1;
        float avg;
        while(left<right){
            avg=(nums[left++]+nums[right--])/2.0;
            ans.insert(avg);
        }
        return ans.size();
    }
};
