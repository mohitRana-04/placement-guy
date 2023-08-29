// convert adj into matrix
// make a visited matrix


void bfs(vector<vector<int>> matrix, int n, int m, int i, int j){
    
}



int problem(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));

    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            if(matrix[i][j] == 0){
                bfs(matrix, n, m, i, j);
            }
        }
    }
}