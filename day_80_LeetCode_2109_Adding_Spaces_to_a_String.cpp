class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int ind = 0; 
        int n = s.size(), m = spaces.size();
        for (int i = 0; i < n; ++i) {
            if (ind < m && i == spaces[ind]) {
                result += ' '; 
                ++ind; 
            }
            result += s[i]; 
        }
        return result;
    }
};
