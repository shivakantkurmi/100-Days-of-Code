class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        int n = a.size(),m=b.size();
        if (m>n) return false;
        unordered_map<int , int> mp,mp2;
        for (int i = 0 ; i<n ;i++){
            mp[a[i]]++;
            if (i<m) mp2[b[i]]++;
        }
        for (auto i : b ){
            if (mp[i]<mp2[i]) return false;
        }
        return true;
    }
};
