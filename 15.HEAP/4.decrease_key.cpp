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
void decrease_key(int i,int x)
{
if(i>size)return;

arr[i] = x;
for(int j=i;i!=0 && arr[parent(j)]>arr[j];)
{
	swap(arr[parent(j)],arr[j]);
	j = parent(j);
}

}



};



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

	cout<<endl;
	h.decrease_key(5,5);
	cout<<endl;
	h.show();
	return 0;
}






























