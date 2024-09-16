class Solution {
  public:
    int maxLength(string &str){
        stack<int> st;
        st.push(-1);
        int max_len = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if (st.empty())
                {
                    st.push(i);
                }
                max_len = max(max_len, i - st.top());
            }
        }
        return max_len;
    }
};
