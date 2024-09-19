class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int n = expression.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            char oper = expression[i];
            if (oper == '+' || oper == '-' || oper == '*') {
                vector<int> s1 = diffWaysToCompute(expression.substr(0, i));
                vector<int> s2 = diffWaysToCompute(expression.substr(i + 1));

                for (auto a : s1) {
                    for (auto b : s2) {
                        if (oper == '+')
                            res.push_back(a + b);
                        else if (oper == '-')
                            res.push_back(a - b);
                        else if (oper == '*')
                            res.push_back(a * b);
                    }
                }
            }
        }

        if (res.empty())
            res.push_back(stoi(expression));// returning vector

        return res;
    }
};
