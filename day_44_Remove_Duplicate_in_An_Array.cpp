class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        unordered_map<int,int> mp;
        vector <int> ans;
        for (auto i :arr){
            mp[i]++;
            if (mp[i]==1) ans.push_back(i);
        }
        return ans;
    }
};
