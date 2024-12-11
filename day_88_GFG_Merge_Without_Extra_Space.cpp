class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int m=b.size();
        for(int i:b) a.push_back(i);
        sort(a.begin(),a.end());
        int n=a.size()-1;
        for(int i=m-1;i>=0;i--){
            b[i]=a[n--];
            a.pop_back();
        }
    }
};
