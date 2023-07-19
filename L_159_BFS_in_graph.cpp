#include <bits/stdc++.h> 

void bfs(vector<vector<int>>& adj,vector<int>& vis,int s,vector<int>&ans){
    queue<int> q;
    q.push(s);
    vis[s]=1;
   while(!q.empty()){
       int x = q.front();
       q.pop();
       ans.push_back(x);
       for(auto it : adj[x]){
           if(vis[it]!=1){
               vis[it]=1;
               q.push(it);
           }
       }
   }
}

vector<int> BFS(int v, vector<pair<int, int>> e){

    // Write your code here
    vector<vector<int>> adj(v);
    for(int i=0;i<v;i++)
    adj[i].push_back(i);

    for(int i=0;i<e.size();i++){
        int u = e[i].first;
        int v = e[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<v;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    vector<int> vis(v,0);
    vector<int> ans;
    for(int i=0;i<v;i++){
        if(vis[i]==0){
            bfs(adj,vis,i,ans);
        }
    }
    return ans; 
}

