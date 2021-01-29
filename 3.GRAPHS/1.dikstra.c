#include<limits.h>
#include<stdio.h>

#define V 9


void printList(int dist[]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 

int minDistanceVertex(int dist[], bool spt[]) 
{ 
    // Initialize min value 
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (spt[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
  
    return min_index; 
} 


void dikstra(int graph[V][V],int src)
{
   int dist[V];
   bool spt[V];
   
   for(int i=0;i<V;i++)
   {
    dist[i] = INT_MAX;
    spt[i] = false;
   }
   dist[0] = 0;
   
   for(int i = 0 ;i<V-1;i++)
   {
   int u = minDistanceVertex(dist,spt);
   spt[u] = true;
   
   for(int v = 0;v<V;v++)
   {
    if(!spt[v] && graph[u][v] + dist[u] < dist[v] &&dist[u]!=INT_MAX)
    {
        dist[v]= graph[u][v]+dist[u];
    }
   }
   }
   printList(dist);
   
  }

int main() {
    // Write C++ code here
    int graph[V][V] = {{ 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    dikstra(graph,0);                    

    return 0;
}
