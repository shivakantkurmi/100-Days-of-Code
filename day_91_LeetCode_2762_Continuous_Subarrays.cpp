class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        map<int,int> mp;
        int l = 0;
        int r = 0;
        long long count = 0;
        for(;r<nums.size();r++ ){
            mp[nums[r]] = r;
            if(mp.rbegin()->first - mp.begin()->first > 2){
                if(mp.rbegin()->second < mp.begin()->second){
                    l = mp.rbegin()->second +1;
                    mp.erase(mp.rbegin()->first);
                }else{
                    l = mp.begin()->second +1;
                    mp.erase(mp.begin()->first);
                }
            }
            count += r - l + 1;
            
        }

        return count;
    }
};
