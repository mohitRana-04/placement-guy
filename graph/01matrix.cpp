#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<vector<int>> mat;
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> vis(n, vector<int> (n, 0));
    vector<vector<int>> dis(n, vector<int> (n, 0));
    queue<pair<pair<int, int>, int>> pq;


    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            if(mat[i][j] == 0) {
                pq{{i, j}, 0};
                vis[i][j] = 1;
            }
        }
    }

    vector<int> row = {1, -1, 0, 0};
    vector<int> col = {0, 0, -1, 1};
    while(pq.size()){
        
        int x = pq.front().first.first;
        int y = pq.front().first.second;
        int d = pq.front().second;
        pq.pop();

        dis[x][y] = 1;
        for(int i = 0; i< 4; i++){
            int x1 = x+row[i];
            int y1 = y+col[i];
            while(x1>=0 && y1>=0 && x1<n && y1<m && mat[x1][y1] == 1 && vis[x1][y1] != 0 ){
                vis[x1][y1] = 1;
                pq.push({{x1,y1}, d+1 });
            }
        }    


    }

    return 0;
}