bool compare(int a, int b) {
    string strA = to_string(a);
    string strB = to_string(b);
    if ((strA + strB) > (strB + strA)) { //check which number is greater
        return true;
    }
    return false;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);
        if (nums[0] == 0) {
            return "0";
        }
        string result = "";
        for (int val : nums) {
            result += to_string(val);
        }
        return result;
    }
};
