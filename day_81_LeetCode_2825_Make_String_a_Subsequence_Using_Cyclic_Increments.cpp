class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n= str1.length(),m=str2.length();
        if(m>n) return false;
        int j=0;
        for (int i = 0 ; i<n ;i++){
            if(j<m && (str1[i]==str2[j]|| ((str1[i]-'a')+1)%26==(str2[j]-'a')%26)) j++;
            if (j==m) return true;
        }
        return false;
    }
};
