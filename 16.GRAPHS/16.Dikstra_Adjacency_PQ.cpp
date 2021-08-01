
void dijkstra(vector<vector<int>> graph, int src, int V)
{
    int dis[V];
    for(int i=0; i<V; i++)
        dis[i] = INT_MAX;
    dis[src] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    while(!pq.empty())
    {
        int curr = pq.top().second;
        pq.pop();
        
        for(int i=0; i<V; i++)
        {
            if(graph[curr][i] && dis[i] > dis[curr] + graph[curr][i])
            {
                dis[i] = dis[curr] + graph[curr][i];
                pq.push({dis[i],i});
            }
        }
    }
    
    for(int i=0; i<V; i++)
        cout<<dis[i]<<" ";
    
