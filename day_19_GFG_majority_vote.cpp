class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        vector<int> ans;
        map <int , int > m;
        for(int i : nums) m[i]++;
        int n= nums.size()/3;
        for (auto i: m){
            if (i.second>n) ans.push_back(i.first);
        }
        if (ans.empty()) return {-1};
        return ans;
    }
};
