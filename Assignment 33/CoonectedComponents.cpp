void dfs(int curr,vector<bool> &vis,vector<int> adj[])
{
    vis[curr]=true;
    for(auto it: adj[curr])
    {
        if(!vis[it])
        {
            dfs(it,vis,adj);
        }
    }
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int count=0;
    vector<int> adj[A];
    for(int i=0;i<B.size();i++)
    {
        adj[B[i][0]-1].push_back(B[i][1]-1);
        adj[B[i][1]-1].push_back(B[i][0]-1);
    }
    vector<bool> vis(A,false);
    for(int i=0;i<A;i++)
    {
        if(!vis[i])
        {
            count++;
            dfs(i,vis,adj);
        }
    }
    return count;
}
