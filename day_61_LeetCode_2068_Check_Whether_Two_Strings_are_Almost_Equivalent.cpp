class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector <int> alpha(26,0);
        vector <int> alpha2(26,0);
        for (auto i: word1){
            alpha[i-'a']++;
        }
        for (auto i: word2){
            alpha2[i-'a']++;
        }
        for (int i = 0 ; i<26 ; i++){
            if (abs(alpha[i]-alpha2[i])>3) return false;
        }
        return true;
    }
};
