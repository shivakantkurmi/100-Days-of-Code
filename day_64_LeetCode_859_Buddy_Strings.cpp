class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int> arr(26,0);
        vector<int> arr2(26,0);
        if (s.length()!=goal.length()) return false;
        int unmatch=0,same=0;
        for (int i = 0 ; i<s.length();i++){
            if(s[i]!=goal[i]) unmatch++;
            arr[s[i]-'a']++;
            arr2[goal[i]-'a']++;
            if (unmatch>2) return false;
        }
        for (int i=0 ; i<26 ; i++) {
            cout<<arr[i]<<arr2[i]<<endl;
            if(arr[i]!=arr2[i]) return false;
        }
        if(unmatch<2) {
            for (int i : arr) {
                if (i>=2) return true;
            }
            return false; }   
        return true;
    }
};
