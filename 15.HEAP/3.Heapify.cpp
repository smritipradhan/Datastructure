#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
int* arr;
int capacity;
int size;
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
void show()
{
	for(int i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void insert(int x)
{
	if(size==capacity)
		return ;
	size++;
	arr[size-1] = x;
	for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
	{
		swap(arr[i],arr[parent(i)]);
		i = parent(i);
	}

}
void minHeapify(int i);
int extractMin();
};

void MinHeap::minHeapify(int i)
{	
	int l = left(i);
	int r = right(i);
	int smallest = i;

	if(l<size && arr[l]<arr[i])
	{
		smallest = l;
	}
	if(r<size && arr[r]<arr[smallest])
	{
		smallest = r;
	}
	if(i!=smallest)
	{
		swap(arr[i],arr[smallest]);
		minHeapify(smallest);
	}

}
int MinHeap::extractMin()
{
if(size==0)
	return INT_MAX;
if(size==1)
{
	size--;
	return arr[0];

}

swap(arr[0],arr[size-1]);
size--;
minHeapify(0);
return arr[size];


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
	cout<<endl;
	cout<<h.extractMin();
	cout<<endl;
	h.show();
	return 0;
}






























