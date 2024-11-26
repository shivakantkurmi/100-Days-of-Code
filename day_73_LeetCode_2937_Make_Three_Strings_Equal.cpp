class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1 = s1.length(),n2=s2.length(),n3=s3.length();
        if (n1==0||n2==0||n3==0) return n1+n2+n3;
        if (s1[0]!=s2[0] || s2[0]!=s3[0] || s1[0]!=s2[0]) return -1;
        int i =0, j = 0 , k =0;
        while (i<n1 && j<n2 && k<n3 && s1[i]==s2[j]&&s2[j]==s3[k]) {
            i++;
            j++;
            k++;
        }
        return n1+n2+n3-(i+j+k);
    }
};
