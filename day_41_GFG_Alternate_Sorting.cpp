class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
          int n = arr.size();
          sort(arr.begin(),arr.end());
          vector <int> ans(n,0);
          int i = 0,j=0 ,k=n-1;
          while (i<=n-2){
              ans[i++]=arr[k--];
              ans[i++]=arr[j++];
          }
          if (i!=n) ans[i]=arr[k];
          return ans;
    }
};
