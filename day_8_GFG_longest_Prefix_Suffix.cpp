class Solution {
  public:
    int lps(string s) { 
        int n = s.length();
    
    // Create lps[] array for holding longest proper prefix which is also a suffix
        vector<int> lps(n, 0);

    // Length of the previous longest prefix suffix
        int length = 0; 
        int i = 1;

    // Build the lps array
        while (i < n) {
             if (s[i] == s[length]) {
                 length++;
                 lps[i] = length;
                 i++;
             } else {
                 if (length != 0) {
                     // Consider the previous lps value
                     length = lps[length - 1];
                 } else {
                     lps[i] = 0;
                     i++;
                 }
             }
         }
    
    // Return the last value in the lps array
           return lps[n - 1];
    }
};
