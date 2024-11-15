class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int max=arr[0];
        int second_max=-1;
        for (int i : arr){
            if (i>max){
                second_max=max;
                max=i;
            }
            else if (second_max<i && i!=max)second_max=i;
        }
        return second_max;
    }
};
