class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int firstmax= arr[0];
        int secondmax= 0;
        for (int i= 1;i<arr.size();i++){
            if (arr[i]>firstmax){
                secondmax= firstmax;
                firstmax=arr[i];
            }
            else if (arr[i]>secondmax) secondmax=arr[i];
        // cout<<firstmax<<endl<<secondmax;
        }
        return firstmax+secondmax;
    }
};
