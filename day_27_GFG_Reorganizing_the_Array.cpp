class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        // Code here
        vector <int> ans(arr.size(),-1);
        for(int i:arr){
            if(i!=-1){
            ans[i]=i;}
        }
        return ans;
    }
};
