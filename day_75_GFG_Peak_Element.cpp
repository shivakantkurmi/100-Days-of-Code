class Solution {
  public:
    int peakElement(vector<int> &arr) {
        if (arr.size()==1) return 0;
        if (arr[0]>=arr[1]) return 0;
        for (int i =1 ; i<arr.size();i++){
            if (i!=arr.size()-1 && arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) return i;
            else if (i==arr.size()-1 && arr[i]>=arr[i-1]) return i;
        }
        return -1;
    }
};
