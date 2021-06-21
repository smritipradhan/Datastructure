#include<bits/stdc++.h>
using namespace std;

void next_greater(int arr[],int n)
{
stack<int> s;
s.push(arr[n-1]);
int ng[n];
for(int i=n-1;i>=0;i--)
{
while(s.empty()==false && s.top()<=arr[i])
{
	s.pop();
}
int p = s.empty()?-1:s.top();
ng[i] = p;
s.push(arr[i]);
}
for(int i=0;i<n;i++)
{
	cout<<ng[i]<<" ";
}
}
void prev_greater(int arr[],int n)
{
stack<int> s;
s.push(arr[0]);

for(int i=0;i<n;i++)
{
while(s.empty()==false && s.top()<=arr[i])
	s.pop();
int p = s.empty()?-1:s.top();
cout<<p<<" ";
s.push(arr[i]);

}}

void next_smaller(int arr[],int n)
{
stack<int> s;
s.push(arr[n-1]);
int ns[n];
for(int i=n-1;i>=0;i--)
{
while(s.empty()==false && s.top()>=arr[i])
{
	s.pop();
}
int p = s.empty()?-1:s.top();
ns[i] = p;
s.push(arr[i]);
}
for(int i=0;i<n;i++)
{
	cout<<ns[i]<<" ";
}


}

void prev_smaller(int arr[],int n)
{
stack<int> s;
s.push(arr[0]);

for(int i=0;i<n;i++)
{
while(s.empty()==false && s.top()>=arr[i])
	s.pop();
int p = s.empty()?-1:s.top();
cout<<p<<" ";
s.push(arr[i]);
}

}



int main()
{
	int arr[] = {2,3,4,6,1,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	next_greater(arr,n);
	cout<<endl;
	
	prev_greater(arr,n);
	cout<<endl;

	next_smaller(arr,n);
cout<<endl;
	prev_smaller(arr,n);
cout<<endl;
	return 0;
}