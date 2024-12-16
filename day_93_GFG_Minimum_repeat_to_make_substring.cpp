class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        int cnt=1;
        string s=s1;
        while(s1.size()<s2.size()) {
            s1+=s;
            cnt+=1;
        }
        if(s1.find(s2)!=-1) return cnt;
        if((s1+s).find(s2)!=-1) return cnt+1;
        return -1;
    }
};
