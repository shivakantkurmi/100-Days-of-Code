class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        bool flag=false;
        if (count(arr.begin(),arr.end(),0)>1) flag=true;
        set<int> s(arr.begin(),arr.end());
        for(int i : s){
            if(i<0 && s.find(-i)!=s.end()) ans.push_back({i,-i});
        }
        if(flag) ans.push_back({0,0});
        return ans;
    }
};
