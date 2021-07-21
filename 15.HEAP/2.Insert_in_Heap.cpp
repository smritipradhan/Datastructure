#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
int *arr;
int size;
int capacity;
public:
MinHeap(int c)
{
	capacity = c;
	size = 0;
	arr = new int[c];
}
int left(int i)
{
	return 2*i+1;
}
int right(int i)
{
	return 2*i+2;
}
int parent(int i)
{
	return floor((i-1)/2);
}
void insert(int x);
void show()
{
for(int i = 0;i<size;i++)
{
	cout<<arr[i]<<" ";
}
}
};
void MinHeap::insert(int x)
{
if(capacity==size)
	return;
size++;
arr[size-1] = x;
//check if its greater than all its descendants
for(int i = size-1;i!=0 && arr[parent(i)]>arr[i];)
{
	swap(arr[parent(i)],arr[i]);
	i = parent(i);
}
}

int main()
{
	MinHeap h(15);
	h.insert(10);
	h.insert(20);
	h.insert(15);
	h.insert(40);
	h.insert(50);
	h.insert(100);
	h.insert(25);
	h.insert(45);
	h.show();
	h.insert(12);
	cout<<endl;
	h.show();

	return 0;
}