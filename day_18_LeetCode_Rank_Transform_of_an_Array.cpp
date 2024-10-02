class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> m;
        int n=0;
        for(int i :arr){
            m[i];
        }
        for (auto &pair : m){
            pair.second= (++n);
        }
        // vector<int> ans ;
        for(auto &i : arr){
            i=m[i];
        }
        return arr;
    }
};
