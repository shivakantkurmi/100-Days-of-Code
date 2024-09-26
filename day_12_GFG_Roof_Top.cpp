class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
       int ans =0, cnt=0;
       for (int i=0 ;i<arr.size()-1;i++){
           if (arr[i]<arr[i+1]) cnt++;
           else {
               ans=max(cnt,ans);
               cnt=0;
           }
       }
       ans=max(cnt,ans);
       return ans;
    }
};
