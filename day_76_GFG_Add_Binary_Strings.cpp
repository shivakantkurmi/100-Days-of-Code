class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        int i=s1.size()-1 , j =s2.size()-1;
        int m= 0,n=0;
        while(s1[m]=='0') m++;
        while(s2[n]=='0') n++;
        string result ="";
        bool carry = false;
        while (i>=m && j>=n){
            if (s1[i]==s2[j]){
                if (s1[i]=='1'){
                    if (carry) result+="1";
                    else {
                        carry = true;
                        result +="0";
                    }
                }
                else {
                    if (carry){
                        result+="1";
                        carry=false;
                    }
                    else result+="0";
                }
            }
            else {
                if (carry) {
                    result +="0";
                    carry=true;
                }
                else {
                    result +="1";
                    carry=false;
                }
            }
            // cout<<"result :"<<result<<"carry :"<<carry<<endl;
            i--;
            j--;
        }
        if (i>=m){
            while (i>=m){
                if (carry){
                    if (s1[i]=='1') result+="0";
                    else {
                        result+="1";
                        carry =false;
                    }
                }
                else result+=s1[i];
                i--;
            }
        }
        else if (j>=n){
            while (j>=n){
                if (carry){
                    if (s2[j]=='1') result+="0";
                    else {
                        result+="1";
                        carry =false;
                    }
                }
                else result+=s2[j];
                j--;
            }
        }
        if(carry)result+="1";
        // cout<<result;
        reverse(result.begin(),result.end());
        return result;
    }
};
