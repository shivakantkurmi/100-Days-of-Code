class Solution {
public:
    int sum(vector<int> &a){
        int s=0;
        for (auto i : a){
            s+=i;
        }
        return s;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans={0,0};
        int n=0;
        int s=0;
        for (auto i :mat){
             int x= sum(i);
             if (x>s){
                ans={n,x};
                s=x;
             }
             n++;
        }
        return ans;
    }
};
