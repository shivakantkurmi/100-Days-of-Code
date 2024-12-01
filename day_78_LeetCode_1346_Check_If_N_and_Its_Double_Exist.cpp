class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int zero=0;
        for(auto &i : arr){
            for(auto &j :arr){
                if(i!=0 && i==2*j) return true;
            }
            if(i==0)zero++;
        }
        if(zero>1) return true;
        return false;
    }    
};


// method 2
/*class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp ;
        for(auto i : arr) mp[i]++;
        if(mp[0]>=2) return true;
        for(auto i :arr ) if(i!=0 && mp[2*i]>0) return true;
        return false;
    }
};*/
