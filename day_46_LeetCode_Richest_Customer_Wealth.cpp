class Solution {
public:
    int sum(vector<int> &arr){
        int ans =0 ;
        for (auto i: arr) ans +=i;
        return ans;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for (auto i : accounts){
            int temp =sum(i);
            ans=max(temp,ans);
        }
        return ans;
    }
};
