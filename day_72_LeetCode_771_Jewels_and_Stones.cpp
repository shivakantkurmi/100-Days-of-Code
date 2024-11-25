class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        int ans=0;
        for (auto i : stones) mp[i]++;
        for (auto i : jewels){
            if (mp[i]!=0)
                  ans+=mp[i];
        }
        return ans;
    }
};
