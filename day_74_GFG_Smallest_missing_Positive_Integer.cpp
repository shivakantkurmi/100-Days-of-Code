class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        int max=*max_element(arr.begin(),arr.end());
        if (max<=0) return 1;
        map<int,int>freq;
        for (auto i : arr){
            if (i>0) freq[i]++;
        }
        for (int i = 1 ; i<max;i++){
            if (freq[i]==0) return i;
        }
        return max+1;
    }
};
