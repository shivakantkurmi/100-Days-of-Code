class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<Node*>> ans(n, vector<Node*>(m, nullptr));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = new Node(mat[i][j]);
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(j<m-1){
                    ans[i][j]->right=ans[i][j+1];
                }
                if(i<n-1){
                    ans[i][j]->down=ans[i+1][j];
                }
            }
        }
        return ans[0][0];
    }
};
