#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix;
    int n = mat.size();
    int m = mat[0].size();
    queue<pair<int, int>> pq;


    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            if(mat[i][j] == 2){
                // means rotten
                pq.push({i, j});
                
            }
        }
    }

    while(pq.size()){
        int x = pq.front().first;
        int y = pq.front().second;
        pq.pop();

        vector<int> row {0, 0, 1, -1};
        vector<int> col {-1, 1, 0, 0};

        for(int i = 0; i< 4; i++){
            int x1 = x+row[i];
            int y1 = y+col[i];

            // means item is fresh
            while(x1>=0 && y1>= 0 && x1< n && y1< m && mat[x1][y1] ==1){
                pq.push({i, j});
                mat[i][j] = 2;
            }
        }
        ans++;

    }

    return 0;
}