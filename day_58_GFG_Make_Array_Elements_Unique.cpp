class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int ans = 0, n = arr.size();
        for(int i=1; i<n; i++){
            if(arr[i] <= arr[i-1]){
                ans += (arr[i-1] - arr[i] + 1);
                arr[i] = arr[i-1] + 1;
            }
        }
        
        return ans;
    }
};
