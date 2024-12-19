class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        int lo = 0 , hi = n-1;
        int idx = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            int ct = arr[mid] - mid - 1;
            if(ct < k){
                idx = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        int act = arr[idx] - idx - 1;
        return arr[idx] + k - act ;
    }
};
