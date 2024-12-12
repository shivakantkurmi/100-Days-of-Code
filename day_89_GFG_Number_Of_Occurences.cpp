class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int ans=0;
        for(int i : arr){
            if(i==target) ans++;
            else if(i>target) break;
        }
        return ans;
    }
};
