void dfs(vector<int> adj[], vector<int> ans, vector<int> vis, int N, int node){
    vis[N] = 1;
    ans.push_back(N);
    for(auto x: adj[N]){
        if(!vis[N]){
            dfs();
        }
    }
}