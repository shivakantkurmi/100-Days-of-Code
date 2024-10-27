class Solution {
  public:
    bool finding(vector<int> &arr, int ele){
        int l = 0;
        int r = arr.size() - 1;
        
        while(l <= r){
            int mid = l + (r-l)/2;
            if(arr[mid] == ele){
                return true;
            }else if(arr[mid] > ele){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return false;
    }
  
  
    bool findTriplet(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++){
            for(int j = i + 1; j < arr.size(); j++){
                int sum = arr[i] + arr[j];
                if (finding(arr, sum)){
                    return true;
                }
            }
        }
        return false;
    }
};
