class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
       int i = 0 , j =arr.size()-1;
       if (j==1) return 1;
       long long lsum=0 , rsum = 0;
       int ans=0;
       while(i<j){
           if (lsum<rsum) {
               lsum+=arr[i++];
               ans=i;
           }
           else {
               rsum+=arr[j--];
               ans =j;
           }
       }
       if (lsum!=rsum) return -1;
       return ans+1;
    }
};
