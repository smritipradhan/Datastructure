#include<bits/stdc++.h>
using namespace std;

void Previous_greater(int arr[],int n)
{

stack<int> s;
s.push(0);
cout<<-1<<" ";

for(int i=1;i<n;i++)
{
while(s.empty()==false && arr[s.top()] <= arr[i])
{
	s.pop();
}

int res = s.empty()?-1:arr[s.top()];
cout<<res<<" ";
s.push(i);

}


}
int main()
{
	int arr[] = {15,10,18,12,4,6,2,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	Previous_greater(arr,n);
	return 0;
}