void dfs (int node)
{
   cout<<node<<" ";
   visited[node]=1;

   for(int adnode : ad_list[node])
   {
      if(visited[adnode]==0)
      {
         dfs(adnode);
      }
   }
}