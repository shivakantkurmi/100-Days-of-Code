#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int setBits(int num) {
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
    bool isSorted(const vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool canSortArray(vector<int>& nums) {
        vector<int> count(nums.size());
        for (int j = 0; j < nums.size(); j++) {
            count[j] = setBits(nums[j]);
        }
        int n = nums.size();
        bool sorted = false;
        for (int k = 0; k < n; k++) {
            sorted = true;
            for (int i = 1; i < n; i++) {
                if (count[i] == count[i - 1] && nums[i] < nums[i - 1]) {
                    swap(nums[i], nums[i - 1]);
                    sorted = false;
                }
            }
            if (isSorted(nums)) {
                return true;
            }
            if (sorted) break;
        }
        return isSorted(nums);
    }
};
