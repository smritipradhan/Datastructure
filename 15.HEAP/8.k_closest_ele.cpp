
#include <bits/stdc++.h>
using namespace std;

void printKClosest(int arr[],int n,int k,int x)
{
priority_queue<pair<int,int>> pq;
for(int i=0;i<k;i++)
{
	pq.push(make_pair(abs(arr[i]-x),i));
}
for(int i=k;i<n;i++)
{
	if(abs(arr[i]-x)<pq.top().first)
	{
		pq.pop();
		pq.push(make_pair(abs(arr[i]-x),i));
	}
}
while(pq.empty()==false)
{
	cout<<arr[pq.top().second]<<" ";
	pq.pop();

}


}

int main()
{

	int arr[] = { 10,30,5,40,38,80,70 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int x=35; int k = 3;

	printKClosest(arr,size,k,x);

	return 0;
}
