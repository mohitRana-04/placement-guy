#include <bits/stdc++.h>
using namespace std;

void dfs(stack<int> st, vector<int> ans, vector<int> adj[], int x){

    vis[i] = 1;
    for(auto x: adj[i]){
        if(vis[i]!= 0) dfs(st, ans, adj, x);
    }
    st.push(i);
    

}

int main(){
    stack<int> st;
    vector<int> v(V, 0);
    st.push(0);
    v[0] = 1;

    for(int i = 0; i< V; i++){
        if(vis!= 0){
            dfs(st, ans, adj, v[i])
        }
    }

    return 0;
}