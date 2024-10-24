class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        vector<int> ans(arr.size(),0);
        int i =0,j=0;
        while (i<=arr.size()-1){
            if (i!=arr.size()-1 && arr[i]!=0 && arr[i]==arr[i+1]){
                arr[i]+=arr[i+1];
                arr[i+1]=0;
                ans[j]=arr[i];
                i+=2;
                j++;
            }
            else if (arr[i]!=0){
                ans[j]=arr[i];
                j++;
                i++;
            }
            else i++;
        }
        return ans;
    }
};
