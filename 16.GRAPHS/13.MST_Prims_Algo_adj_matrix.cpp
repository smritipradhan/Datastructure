#include<bits/stdc++.h>
using namespace std;

#define V 5

int prims(int graph[][V])
{
nt key[V];
	int res=0; 
	fill(key,key+V,INT_MAX);
	bool mSet[V]; key[0]=0;

	for (int count = 0; count < V ; count++) 
	{ 
		int u = -1; 

		for(int i=0;i<V;i++)
		    {
		        if(!mSet[i]&&(u==-1||key[i]<key[u]))
		        u=i;
		    }   
		mSet[u] = true; 
		res+=key[u];

		
		for (int v = 0; v < V; v++) 

			if (graph[u][v]!=0 && mSet[v] == false) 
				key[v] = min(key[v],graph[u][v]); 
	} 
    return res;
}



int main()
{	
	//given a undirected weighted graph
	//We need to find the Minimum Spanning Tree
	int graph[][5] = {{0,2,0,6,0},
					  {2,0,3,8,5},
					  {0,3,0,0,7},
					  {6,8,0,0,9},
					  {0,5,7,9,0}};

	cout<<prims(graph);
	return 0;
}
