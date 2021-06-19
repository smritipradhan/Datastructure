#include<bits/stdc++.h>
using namespace std;

class petrolPump
{
public:
int petrol;
int distance;
};

int CircularTour(petrolPump p[],int n)
{
int start = 0;
int end = 1;

int diff = p[start].petrol-p[start].distance;
while(start!=end || diff<0) //loop through every petrol pump
{
	//change the start if the current petrol goes less than 0
	//remove the starting point
while(start!=end && diff<0)
{
//move the start 
//reset the current petrol	
diff -= p[start].petrol-p[start].distance;
start = (start+1)%n;

if(start==0) //if start is 0 ie. already looped over
return -1;

}
//if the current petrol is not less than 0 then we go to next lcation and see whther it can traverse
diff += p[end].petrol-p[end].distance;
end = (end+1)%n;

}
return start;
}
int main()
{
	petrolPump arr[] = {{4,6},{6,5},{7,3},{4,5}};
	int size = sizeof(arr)/sizeof(arr[0]);

	cout<<CircularTour(arr,size);
}