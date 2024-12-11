class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        long ans = 0;  
        bool isNegative = false;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            isNegative = (s[i] == '-');
            i++;
        }
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
            if (!isNegative && ans > INT_MAX) return INT_MAX;
            if (isNegative && -ans < INT_MIN) return INT_MIN;
            i++;
        }
        return isNegative ? -ans : ans;
    }
};
