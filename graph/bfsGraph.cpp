void bfs(int n, vector<int> adj[]){

    vector<int> vis(n, 0);
    v[0] = 1;
    queue<int> pq;
    pq.push_back(0);

    vector<int> ans;
    while(pq.size()){
        int node = pq.front();
        pq.pop();
        ans.push_back(node);
        for(auto x: adj[node]){
            // means not visited
            if(vis[x] != 1){
                vis[x] = 1;
                pq.push(x);
            }
        }
    }

}