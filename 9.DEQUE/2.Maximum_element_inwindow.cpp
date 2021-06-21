#include<bits/stdc++.h>
using namespace std;


void maxi_sub(int arr[],int n,int k)
{

deque<int> dq;
//get the maximum element in the the window
for(int i=0;i<min(n,k);i++)
{
while(!dq.empty() && arr[i]>=arr[dq.back()])
{
dq.pop_back();
}
dq.push_back(i); //all the elements will be added to the queue coming afterwards
//but is the element in the deque before is small then it will be poped
}

for(int i = k; i<n ; i++) //3,4,5,6 
{
cout<<arr[dq.front()]<<" ";

while(!dq.empty() && dq.front()<=i-k)    //3-3=0,4-3=1,5-3=2,6-3=3
dq.pop_front();

while(!dq.empty() && arr[i]>=arr[dq.back()])
{
dq.pop_back();
}


   dq.push_back(i);


}
cout << arr[dq.front()];
}


int main()
{
int arr[] = { 20, 40, 30, 10, 60}, n = 5;
    int k = 3;
    
   
maxi_sub(arr,n,k);
return 0;

}