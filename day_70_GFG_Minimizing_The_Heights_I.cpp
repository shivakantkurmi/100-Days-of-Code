class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int initialDiff = arr[n - 1] - arr[0]; 
        int minHeight = arr[0] + k; 
        int maxHeight = arr[n - 1] - k; 
        if (minHeight > maxHeight) swap(minHeight, maxHeight); 
        
        for (int i = 0; i < n - 1; i++) {
            int currentMax = max(maxHeight, arr[i] + k); 
            int currentMin = min(minHeight, arr[i + 1] - k); 
            initialDiff = min(initialDiff, currentMax - currentMin);
        }
        
        return initialDiff;
    }
};
