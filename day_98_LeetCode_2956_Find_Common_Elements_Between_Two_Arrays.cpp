class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp,mp2;
        for(int i :nums1)mp[i]++;
        for(int i :nums2)mp2[i]++;
        int ans1=0,ans2=0;
        for(auto i =mp.begin();i!=mp.end();i++){
            if(mp2[i->first]>0) ans1+=i->second;
        }
        for(auto i =mp2.begin();i!=mp2.end();i++){
            if(mp[i->first]>0) ans2+=i->second;
        }
        return{ans1,ans2};
    }
};
