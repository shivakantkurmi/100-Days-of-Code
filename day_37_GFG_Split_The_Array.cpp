class Solution {
  public:
  const int MOD = 1e9 + 7;
    int countgroup(vector<int>& arr) {
        // Complete the function
        int xr=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            xr = xr^arr[i];
        }
        if(xr!=0){
            return 0;
        }
        int result =1;
        for(int i=0;i<n-1;i++){
            result = (result*2)%MOD;
        }
        return result-1;
    }
};
