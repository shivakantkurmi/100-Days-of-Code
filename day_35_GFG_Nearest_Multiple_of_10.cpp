#include<bits/stdc++.h>
class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        if(str[str.size()-1] == '0')return str;
        int diff = str[str.size()-1]-'0' <=5 ? -1 * (str[str.size()-1]-'0') : 10 - (str[str.size()-1]-'0');
        reverse(str.begin(),str.end());
        int i = 0,carry = 0;
        while(i<str.size() || carry){
            int sum = diff + carry + (str[i]-'0');
            str[i] = sum%10 + '0';
            carry = sum/10;
            diff = 0;
            i++;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
