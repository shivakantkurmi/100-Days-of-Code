class Solution {
  public:
    int findFloor(vector<int>& arr, int k) {
          int ans[2]={INT_MIN,-1};
          for(int i = 0 ; i<arr.size();i++){
              if(arr[i]<=k && arr[i]>ans[0]){
                  ans[0]=arr[i];
                  ans[1]=i;
              }
          }
          return ans[1];
    }
};
