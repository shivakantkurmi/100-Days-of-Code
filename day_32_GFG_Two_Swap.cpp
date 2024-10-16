class Solution {
  public:
  
    bool checkSorted(vector<int> &arr) {
       
       int swaps=0;
       int n=arr.size();
   
       
       
       for(int i=0;i<n;i++){
             if(arr[i] != i+1) {
                int temp = arr[i];
                arr[i] = arr[temp-1];
                arr[temp-1] = temp;
                swaps++;
                i--;
             }
       }
       if(swaps==2 || swaps==0){
           return true;
       }
       else{
           return false;
       }
        
    }
};

