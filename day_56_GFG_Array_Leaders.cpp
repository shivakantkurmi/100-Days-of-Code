class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size() ;
        int rmax=arr[n-1];
        for (int j=n-1; j>=0;j--){
            if (arr[j]>= rmax){ 
                ans.push_back(arr[j]);
                rmax=arr[j];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
