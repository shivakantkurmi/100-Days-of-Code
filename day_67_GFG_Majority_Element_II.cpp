class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        map<int,int> mp;
        vector<int> ans={};
        int n= arr.size();
        for (auto i : arr) mp[i]++;
        for (auto it =mp.begin(); it!=mp.end();it++){
            if ((it->second)>n/3) ans.push_back(it->first);
        }
        return ans;
    }
};
