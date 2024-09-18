class Solution{
    public:
    bool ispar(string x){
        stack<char> st;
        for ( auto i : x ){
            if ( i == '(' || i == '[' || i == '{' ){
                st.push(i);
            } else if ( i == ')' ){
                if ( !st.empty() && st.top() == '(' ) st.pop();
                else return false;
            } else if ( i == ']' ){
                if ( !st.empty() && st.top() == '[' ) st.pop();
                else return false;
            } else if ( i == '}' ){
                if ( !st.empty() && st.top() == '{' ) st.pop();
                else return false;
            }
        } return st.size() == 0;
    }
};
