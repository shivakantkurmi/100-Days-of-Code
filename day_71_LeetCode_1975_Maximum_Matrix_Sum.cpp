class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans=0;
        int cnt=0 , zero=0;
        int minneg=INT_MIN;
        for (auto i : matrix){
            for (auto j : i){
                if (j>0){ 
                    ans+=j;
                    minneg=max(minneg,-j);
                    }
                else if  (j<0){ 
                    ans-=j;
                    cnt++;
                    minneg=max(minneg,j);
                    }
                else zero ++;    
            }
        }
        if(cnt==0)return ans;
        if (cnt%2==0) return ans;
        else {
            if (zero>0) return ans;
            return ans+(2*minneg);}
    }
};
