class Solution {
  public:
    int minChar(string& s) {
        string rev = s; reverse(rev.begin(), rev.end());
        string newS = s + '#' + rev; int n = newS.size();
        vector<int> lps(n+1, 0);
        for ( int i = 1; i<n; i++ ){
            int j = lps[i-1];
            while ( j > 0 && newS[i] != newS[j] ) j = lps[j-1];
            if ( newS[i] == newS[j] ) j++;
            lps[i] = j;
        } return s.size() - lps[n-1];
    }
};
