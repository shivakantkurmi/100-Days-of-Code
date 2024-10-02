class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        int k = 1;
        
        while(arr.size() > 1){
            arr.insert(arr.begin(),arr[arr.size()-1]);
            arr.pop_back();
            
            int remove_ind = arr.size()-k;
            
            if(remove_ind < 0){
                remove_ind = 0;
            }
            arr.erase(arr.begin()+remove_ind);
            k++;
        }
        return arr[0];
    }
};
