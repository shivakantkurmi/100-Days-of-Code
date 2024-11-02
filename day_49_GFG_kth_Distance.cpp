#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {
            // If arr[i] is already in the map, we found a duplicate within the range
            if (mp.find(arr[i]) != mp.end()) {
                return true;
            }

            // Add current element to the map
            mp[arr[i]]++;

            // Ensure map only holds elements within the last k indices
            if (i >= k) {
                mp.erase(arr[i - k]); // Remove the element that's out of the k-distance window
            }
        }

        return false;
    }
};
