class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        vector<int> arr(26,0);
        if (s1.length()!=s2.length()) return false;
        for(int i = 0 ; i < s2.length() ; i++){
            arr[s1[i]-'a']++;
            arr[s2[i]-'a']--;
        }
        for(int i: arr) if (i!=0) return false;
        return true;
    }
};
