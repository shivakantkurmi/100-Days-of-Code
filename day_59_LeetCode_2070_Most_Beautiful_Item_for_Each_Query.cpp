class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items,vector<int>& queries) {
        sort(items.begin(), items.end());
        vector<pair<int,int>> index(queries.size());
        for (int i = 0 ; i<queries.size();i++) index[i]={queries[i],i};
        sort(index.begin(),index.end());
        int j=0,x=0;
        vector<int> ans(queries.size(), 0);
        for (auto [i,s] : index) {
            while (j != items.size() && i >= items[j][0]) {
                x = max(x, items[j][1]);
                j++;
            }
            ans[s] = x;
        }
        return ans;
    }
};
