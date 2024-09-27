class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        int start =0 , j=k-1 , max = arr[0],maxind=0;
        vector<int> ans;
        for (int i=1 ; i<k ;i++){
            if (max<arr[i]) {
                max= arr[i];
                maxind=i;
            }
        }
        while(j!=arr.size()){
            if (arr[j]>max && start<=maxind) {
                ans.push_back(arr[j]);
                max=arr[j];
                maxind=j;
            }
            else if (start >maxind){
                max=arr[start];
                for (int i=start ; i<=j ;i++){
                   if (max<arr[i]) {
                      max= arr[i];
                      maxind=i;
                    }
                }
                ans.push_back(max);
            }
            else{
                ans.push_back(max);
            }
            start++;
            j++;
        }
        return ans;
    }
};
