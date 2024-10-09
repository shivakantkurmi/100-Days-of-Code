class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt =0 ;
        stack<char> st;
        for(auto i:s){
            if (i=='(') st.push(i);
            else if (i==')'){
                if (st.empty()) cnt++;
                else{
                    st.pop();
                }
            }
        }
        if(!st.empty())cnt+=st.size();
        return cnt;
    }
};
