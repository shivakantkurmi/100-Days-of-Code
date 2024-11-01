class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.length()==1) return false;
        for (auto i:s){
            if (i=='('||i=='{'||i=='[') st.push(i);
            else if (st.size()>0)
            {if (i==')'&&st.top()!='(') return false;
            else if (i=='}'&&st.top()!='{') return false;
            else if (i==']'&&st.top()!='[') return false;
            else{
                st.pop();
            }}
            else return false;
        }
        if(st.size()!=0) return false;
        return true;
    }
};
