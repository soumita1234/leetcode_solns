class Solution 
{
    public:
    vector<int>parent;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        vector<int> ans(2);
        parent.resize(edges.size()+1,-1);
        ans=detectCycle(edges);
        return ans;
    }
    
    
    void union_op(int from,int to)
    {
        from=find(from);
        to=find(to);
        parent[from]=to;
    }
    
    int find(int v)
    {
        if(parent[v]==-1) return v;
        else return find(parent[v]);
    }
    
    vector <int> detectCycle(vector<vector<int>>& edges)
    {
        vector<int> ans(2);
        for(int i=0;i<edges.size();i++)
        {
            if(find(edges[i][0])==find(edges[i][1])) 
            {
                ans[0]=edges[i][0]; ans[1]=edges[i][1]; break;
            }
            else union_op(find(edges[i][0]),find(edges[i][1]));
        }
     return ans;
    }
};
