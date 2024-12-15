class Solution {
  public:
    int largest(vector<int> &arr) {
       int max=arr[0];
       for(auto i : arr) max=max<i?i:max;
       return max;
    }
};
