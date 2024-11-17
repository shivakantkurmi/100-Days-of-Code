class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        // method 1
        // stack<int> st;
        // for(int i : arr) st.push(i);
        // for (int &i : arr){
        //     i=st.top();
        //     st.pop();
        // }
        
        
        
        // method 2
        int n = arr.size();
        for (int i = 0 ,j=n-1; i<j;i++,j--){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]= temp;
        }
    }
};
