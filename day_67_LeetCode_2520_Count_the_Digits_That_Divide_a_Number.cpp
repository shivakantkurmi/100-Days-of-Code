class Solution {
public:
    int countDigits(int num) {
        int ans =0;
        string s = to_string(num);
        for (auto i : s){
            if (num%(i-'0')==0)ans++;
        }
        return ans;
    }
};
