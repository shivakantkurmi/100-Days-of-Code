class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        unordered_map <int , int> mp;
        int ans = 0 ;
        for (auto i : arr){
            mp[i]++;
        }
        for (int i : arr){
            if (mp[i+k]) ans+=mp[i+k];
        }
        return ans;
    }
};
