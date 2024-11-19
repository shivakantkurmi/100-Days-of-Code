class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int cnt =0 ;
        for (auto &i : arr){
            if (i!=0) swap(i,arr[cnt++]);
        }
    }
};
