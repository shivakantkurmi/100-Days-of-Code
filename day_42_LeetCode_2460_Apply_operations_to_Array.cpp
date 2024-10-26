class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n= nums.size();
        vector <int> ans (n,0);
        int i = 0,j =0 ;
        while(i<n-1){
            if (nums[i]!=0 && nums[i]==nums[i+1]){
                nums[i]*=2;
                ans[j++]=nums[i];
                nums[i+1]=0;
                i+=2;
            }
            else if (nums[i]!=0) ans[j++]=nums[i++];
            else i++;
        }
        if(i!=n) ans[j]=nums[i];
        return ans;
    }
};
