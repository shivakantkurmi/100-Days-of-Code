class Solution {
  public:
    bool sentencePalindrome(string &s) {
        string s1;
        for (char i : s) {
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z') || ('0' <= i && i <= '9')) {
                s1 += tolower(i);
            }
        }
        for (int i = 0, j = s1.length() - 1; i < j; i++, j--) {
            if (s1[i] != s1[j]) {
                return false;
            }
        }
        return true;
    }
};
