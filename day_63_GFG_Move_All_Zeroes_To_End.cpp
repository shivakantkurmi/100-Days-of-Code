class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int count = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                count++;
            }
        }
        arr.erase((remove(arr.begin(),arr.end(),0)),arr.end());
        for(int i=1;i<=count;i++){
            arr.push_back(0);
        }
    }
};
