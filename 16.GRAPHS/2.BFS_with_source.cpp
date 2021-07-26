#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
adj[u].push_back(v);
adj[v].push_back(u);

}

void BFS(vector<int> adj[],int source,int V)
{
bool visited[V];
for(int i=0;i<V;i++)
{
	visited[i] = false;
}	
queue<int> q;
q.push(source);
visited[source] = true;
while(q.empty()==false)
{
int temp = q.front();
q.pop();
cout<<temp<<" ";

for(auto x:adj[temp])
{
if(visited[x]==false)
{
visited[x] = true;
q.push(x);
}

}


}

}



int main()
{
int V = 6; //Number of vertices is 4 	
vector<int> adj[V]; //array of vectors;
addEdge(adj,0,1);
addEdge(adj,0,5);
addEdge(adj,0,2);
addEdge(adj,1,3);
addEdge(adj,3,5);
addEdge(adj,5,4);
addEdge(adj,2,4);
addEdge(adj,4,5);

BFS(adj,0,V);

return 0;
}