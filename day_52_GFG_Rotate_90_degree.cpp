void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();
    
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n ; ++j){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    for(int i = 0; i < n; ++i){
        reverse(begin(matrix[i]), end(matrix[i]));
    }
}
