void bfs (int node)
{
    queue<int>q;
    q.push(node);
    visited[node]=1;

    while (!q.empty())
    {
        int head= q.front();
        cout<<head<<" "; 
        q.pop();
        
        for(int adnode :ad_list[head])
        {
            if(visited[adnode]==0)
            {
                visited[adnode]=1;
                q.push(adnode);
            }
        }
    }

}