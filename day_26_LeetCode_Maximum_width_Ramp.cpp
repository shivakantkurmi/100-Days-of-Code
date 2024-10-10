class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int> dec;  
        for (int i = 0; i < nums.size(); i++) {
            if (dec.empty() || nums[i] < nums[dec.back()]) {
                dec.push_back(i);
            }
        }
        int maxRamp = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            while (!dec.empty() && nums[i] >= nums[dec.back()]) {
                maxRamp = max(maxRamp, i - dec.back());
                dec.pop_back();  
            }
        }

        return maxRamp;
    }
};
