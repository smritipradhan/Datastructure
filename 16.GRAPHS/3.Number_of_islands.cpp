#include<bits/stdc++.h>
using namespace std;


void BFS(vector<int> adj[],int source,bool visited[])
{
	queue<int> q;
	q.push(source);
	visited[source] = true;

	while(q.empty()==false)
	{
		int temp = q.front();
		cout<<temp<<" ";
		q.pop();

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
void BFSDin(vector<int>adj[],int V)
{
	bool visited[V];
	int count = 0;
	for(int i=0;i<V;i++)
	{
		visited[i] = false;
	}

	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			BFS(adj,i,visited);
			count++;
		}
	}
cout<<endl<<count;
}


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=7;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);

	cout << "Following is Breadth First Traversal: "<< endl; 
	BFSDin(adj,V); 

	return 0; 
} 
