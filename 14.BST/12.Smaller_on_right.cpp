#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int smal_on_right(int arr[],int n)
{
 int res = 0;
 int maxi = 0;
 set<int> s;
 for(int i=n-1;i>=0;i--)
 {
     s.insert(arr[i]);
     int count = 0;
     auto itr = s.lower_bound(arr[i]);
     int dist = distance(s.begin(),itr);
     maxi  = max(dist,maxi); 
 }
 return maxi;
    
}
int main() {
	//code0
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	int N;
	cin>>N; //size of and array
	int arr[N];
	for(int i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
	int max= 0 ;
	max = smal_on_right(arr,N);
	cout<<max<<endl;
	}
	return 0;
}
/*i/p
4
10
10 6 9 7 20 19 21 18 17 16
5
5 4 3 2 1
5
1 2 3 4 5
5
1 2 3 2 1
o/p
4
4
0
2*/