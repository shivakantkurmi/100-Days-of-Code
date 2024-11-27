class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int totalsum=0,n=arr.size();
        vector<int>ans={-1,-1};
        for(auto s:arr){
            totalsum+=s;
        }
        
        if(totalsum%3!=0){
            return ans;
        }
        int req_sum=totalsum/3;
        int i =0 , j =arr.size()-1;
        int sumi=0 , sumj=0;
        while(i<j ){
            if (sumi<req_sum){
                sumi+=arr[i++];
            }
            if (sumj<req_sum){
                sumj+=arr[j--];
            }
            if (sumi>req_sum || sumj>req_sum) return ans;
            if (sumi==sumj&&sumi==req_sum) return {i-1,j};
        }
        return ans;
    }
};
