class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int n = events.size();
        vector<int> maxValues(n);
        maxValues[0] = events[0][2];
        for (int i = 1; i < n; ++i) {
            maxValues[i] = max(maxValues[i - 1], events[i][2]);
        }
        int maxSum = 0;
        for (int i = 0; i < n; ++i) {
            int start = events[i][0];
            int value = events[i][2];
            int idx = binarySearch(events, start - 1);
            int currentSum = value;
            if (idx != -1) {
                currentSum += maxValues[idx];
            }
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }

private:
    int binarySearch(vector<vector<int>>& events, int targetEnd) {
        int start = 0, end = events.size() - 1, res = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (events[mid][1] <= targetEnd) {
                res = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return res;
    }
};
