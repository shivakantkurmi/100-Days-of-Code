class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.length()<8) return false;
        string ch="!@#$%^&*()-+";
        int arr[4]={0,0,0,0} ;
        for (int i =0 ; i<password.length();i++){
            if (password[i]<='Z'&& password[i]>='A') arr[0]=1;
            else if (password[i]<='z'&& password[i]>='a') arr[1]=1;
            else if (password[i]<='9'&& password[i]>='0') arr[2]=1;
            else if (ch.find(password[i])!=-1) arr[3]=1;
            if (i!=password.length()-1 && password[i]==password[i+1]) return false;
        }
        for (int i :arr) if (i==0) return false;
        return true;
    }
};
