class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        int st = 0, l = s.length()-1;
        while(st<=l){
            if (s[st++]!=s[l--]) return false;
        }
        return true;
    }
};
