class Solution {
  public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n= arr.size() , i=0;
        d%=n;
        vector<int> rotate(d,0);
        while (i<d){
            rotate[i]=arr[i];
            i++;
        }
        int j ;
        for (i=d, j=0 ; i<n ; i++,j++){
            arr[j]=arr[i];
        }
        for (auto x : rotate){
            arr[j++]=x;
        }
    
    }
};
