class Solution {
public:
    long long minimumSteps(string& s) {
        int black=0;
        long long  swap=0;
        for(char c: s){
            (c=='1')?black++:swap+=black;
        }
        return swap;
    }
};
