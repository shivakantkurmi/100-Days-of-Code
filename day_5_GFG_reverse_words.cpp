class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        stack <string> st;
        string a="" ;
        for (auto i : str){
           if(i=='.') {
               st.push(a);
               a="";
           }
           else a+=i;
        }
        st.push(a);
        string ans="";
        while(!st.empty()){
            string s= st.top();
            st.pop();
            if(st.empty()) ans+=s;
            else ans=ans+s+".";
        }
        return ans;
    }
};
