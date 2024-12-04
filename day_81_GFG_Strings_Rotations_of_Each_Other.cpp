class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        int n = s1.length() , m = s2.length();
        if(n!=m) return false;
        if((s1+s1).find(s2)!=-1)return true;
        return false;
    }
};
