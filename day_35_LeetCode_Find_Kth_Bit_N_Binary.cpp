#include <bits/stdc++.h>
class Solution {
public:
    string invert(string s){
        for (auto &ch : s){
            if (ch =='1') ch='0';
            else ch = '1';
        }
        return s;
    }
    string convert(int n ){
        if (n==0) return "0";
        else {
            string st=convert(n-1);
            string in =invert(st);
            reverse(in.begin(),in.end());
            return st +"1"+in;
        }
    }
    char findKthBit(int n, int k) {
        string binary = convert(n);
        return binary[k-1];
    }
};
