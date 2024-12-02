class Solution {
 public:
    vector<int> search(string& pat, string& txt) {
        int m = pat.size(), n = txt.size();
        vector<int> lps(m, 0), ans;
        computeLPSArray(pat, m, lps);
        int i = 0, j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
            }
            if (j == m) { 
                ans.push_back(i - j);
                j = lps[j - 1];
            } else if (i < n && txt[i] != pat[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return ans;
    }

 private:
    void computeLPSArray(string& pat, int m, vector<int>& lps) {
        int length = 0, i = 1;
        lps[0] = 0;
        while (i < m) {
            if (pat[i] == pat[length]) {
                length++;
                lps[i] = length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
};
