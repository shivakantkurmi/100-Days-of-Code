class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        for (auto i : letters){
            if (i>target) return i;
        }
        return ans;
    }
};
