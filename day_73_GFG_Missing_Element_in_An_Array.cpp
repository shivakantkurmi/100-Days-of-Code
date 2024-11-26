class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size()+1;
        int sum=0,realsum=n*(n+1)/2;
        for (auto i:arr) sum+=i;
        return realsum-sum;
    }
};
