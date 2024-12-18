class Solution {
  public:
    static bool great(int i , int j ){
        string x=to_string(i)+to_string(j);
        string y=to_string(j)+to_string(i);
        return x>y ;
    }
    string findLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end(),great);
        string ans="";
        bool flag=true;
        for(auto i : arr) {
            if (flag&& i==0) continue;
            else{
                ans+=to_string(i);
                flag=false;
              }
        }
        if (flag) return "0";
        return ans;
    }
};
