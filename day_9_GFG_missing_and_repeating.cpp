class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> ans(2, -1);
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            int curr = abs(arr[i]);
            if(arr[curr - 1] < 0) {
                ans[0] = curr;
            }
            else {
                arr[curr - 1] = -arr[curr - 1];
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans[1] = i + 1;
                break;
            }
        }
        return ans;
    }
};
