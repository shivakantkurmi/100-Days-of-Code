class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        unordered_map<char,int> mp;
        for(auto i : s) mp[i]++;
        for(auto i : s) if(mp[i]==1) return i;
        return '$';
    }
};
