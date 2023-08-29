// input is adjancy list

bool isBipartite(int V, vector<int> adj[]){
    queue<int> q;
    q.push(0);
    vector<int> color(V, -1);
    // let 2 color say 0 and 1
    color[0] = 0;

    while(q.size()){
        int n = q.front();
        q.pop();

        for(auto x: adj[n]){
            if(v[x] == -1) v[x] = !v[n];
            if(v[x] == v[n]) return false;
            q.push(x);

        }
    }
    return true;
}