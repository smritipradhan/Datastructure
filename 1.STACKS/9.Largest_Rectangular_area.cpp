#include<bits/stdc++.h>
using namespace std;

int Rectangular_area(int arr[],int n)
{

 int ps[n],ns[n];
    
stack<int> s1;
stack<int> s2;

//loop for finding the previos greater element
s1.push(0);
for(int i=0;i<n;i++)
{
while(s1.empty()==false && arr[s1.top()]>=arr[i])
{
	s1.pop();
}

int p = s1.empty()?-1:s1.top();
cout<<p<<" ";
ps[i] = p;
s1.push(i);
}



cout<<endl;
//loop for finding the next greater element
s2.push(n);


for(int i=n-1;i>=0;i--)
{
	while(s2.empty()==false && arr[s2.top()]>=arr[i])
	{
		s2.pop();
	}

	int q = s2.empty()?n:s2.top();
	cout<<q<<" ";
	ns[i] = q;
	s2.push(i);

}


int res = 0;
for(int i=0;i<n;i++)
{
int cur = arr[i];
cur += (i-ps[i]-1)*arr[i];
cur += (ns[i]-i-1)*arr[i];
res = max(cur,res);
}
cout<<endl;
return res;
}
int main()
{
	int arr[] = {6,2,5,4,1,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<Rectangular_area(arr,n);
	return 0;
}
int maxRectangle(int mat[][C]) 
{ 
    int res = largestHist(mat[0],C); 
  
    for (int i = 1; i < R; i++) { 
  
        for (int j = 0; j < C; j++) 
            if (mat[i][j]) 
                mat[i][j] += mat[i - 1][j]; 

        res = max(res, largestHist(mat[i],C)); 
    } 
        return res;
}