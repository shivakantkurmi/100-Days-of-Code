class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> s1Freq(26, 0), windowFreq(26, 0);

        for (int i = 0; i < s1.size(); i++) {
            s1Freq[s1[i] - 'a']++;
            windowFreq[s2[i] - 'a']++;
        }
        if (s1Freq == windowFreq) return true;
        for (int i = s1.size(); i < s2.size(); i++) {
            windowFreq[s2[i] - 'a']++;
            windowFreq[s2[i - s1.size()] - 'a']--;
            if (s1Freq == windowFreq) return true;
        }
        return false;
    }
};
