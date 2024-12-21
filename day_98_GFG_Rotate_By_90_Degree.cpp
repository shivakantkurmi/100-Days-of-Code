class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        for(auto &i : mat) reverse(i.begin(),i.end());
        for(int i =0 ; i<mat.size();i++){
            for(int j=i;j<mat.size();j++){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]= temp;
            }
        }
    }
};
