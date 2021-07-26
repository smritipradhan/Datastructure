#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
adj[u].push_back(v);
adj[v].push_back(u);

}

void show(vector<int> adj[],int V)
{

for(int i=0;i<V;i++)
{
cout<<i;
for(auto x:adj[i])
{
	cout<<"->"<<x;
}
cout<<endl;

}
}
int main()
{
int V = 4; //Number of vertices is 4 	
vector<int> adj[V]; //array of vectors;
addEdge(adj,0,1);
addEdge(adj,2,3);
addEdge(adj,0,3);
show(adj,4);
return 0;
}