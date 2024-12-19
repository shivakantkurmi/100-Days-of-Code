class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int right = 0;
        int left = 0;
        int res = 0;
        while(left < arr.size()) {
            right = max(right, arr[left]);
            if(right == left) {
                ++right;
                ++res;
            } 
            ++left;
        }
        return res;
    }
};
