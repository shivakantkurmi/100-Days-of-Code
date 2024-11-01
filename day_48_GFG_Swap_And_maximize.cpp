class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long ans=0;
        int low=0,high=arr.size()-1,turn=1;
        while(low<high){
            if (turn){
                ans+=arr[high]-arr[low];
                low++;
            }
            else{
                ans+=arr[high]-arr[low];
                high--;
            }
            turn=1-turn;
        }
        return ans+arr[low]-arr[0];
    }
};
