#include<bits/stdc++.h>
using namespace std;

#define R 4
#define C 4


int largest_histogram(int arr[],int n)
{
int ps[n],ns[n];

stack<int> s1;
stack<int> s2;

s1.push(0);
for(int i=0;i<n;i++)
{
while(s1.empty()==false && arr[s1.top()] >= arr[i])
{
	s1.pop();
}

int p = s1.empty()?-1:s1.top();
//cout<<p<<" ";
ps[i] = p;
s1.push(i);

}
//cout<<endl;
s2.push(n);
for(int i=n-1;i>=0;i--)
{
	while(s2.empty()==false && arr[s2.top()]>=arr[i])
	{
		s2.pop();
	}
	int q = s2.empty()?n:s2.top();
	//cout<<q<<" ";
	ns[i] = q;
	s2.push(i);
}

int res = 0;
//cout<<endl;
for(int i=0;i<n;i++)
{
	int cur = arr[i];
	cur += (i-ps[i]-1)*arr[i];
	cur += (ns[i]-i-1)*arr[i];

	res = max(cur,res);
}

return res;


}
int Largest_Rectangle(int mat[][C])
{

int res  = largest_histogram(mat[0],C);
for(int i=1;i<R;i++)
{
for(int j=0;j<C;j++)
{
if(mat[i][j] == 1)
{
mat[i][j] += mat[i-1][j];
}
}
res = max(res,largest_histogram(mat[i],C));
}



return res;

}
int main()
{
	int mat[][C] = {
		{0,1,1,0},
		{1,1,1,1},
		{1,1,1,1},
		{1,1,0,0}};

cout<<Largest_Rectangle(mat);

return 0;


}