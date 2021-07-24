#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
int size;
int* arr;
int capacity;
public:
MinHeap(int c)
{
	 size = 0;
	 capacity = c;
	 arr = new int[c];
}
//---------------------------------------
int left(int i)
{return 2*i+1;}
int right(int i)
{return 2*i+2;}
int parent(int i)
{
	return floor((i-1)/2);
}
//-------------------------------------
void insert(int x)
{
if(size == capacity)return ;
size++;
arr[size-1] = x;
for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
{
	swap(arr[i],arr[parent(i)]);
	i = parent(i);
}

}
//-------------------------------------------
void show()
{
for(int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;

}

//--------------------------------------------------
void MinHeapify(int i)
{
int smallest = i;
int l = left(i);
int r = right(i);

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
	MinHeapify(smallest);
}
}
//-----------------------------------------------
int ExtractMin()
{
if(size<=0)return INT_MAX;

if(size==1)
{
	size--;
	return arr[0];
}

swap(arr[0],arr[size-1]);
size--;

MinHeapify(0);
return arr[size];

}
//-----------------------------------------------
void decrease_key(int i,int x)
{
if(i>size)return;
arr[i] = x;
for(;i!=0 && arr[parent(i)]>arr[i];)
{
	swap(arr[i],arr[parent(i)]);
	i = parent(i);
}

}
//-----------------------------------
void delete_key(int i)
{
	decrease_key(i,INT_MIN);
	ExtractMin();
}


};



int main()
{
	MinHeap h(15);
	h.insert(10);
	h.insert(20);
	h.insert(30);
	h.insert(40);
	h.insert(50);
	h.insert(35);
	h.insert(38);
	h.insert(45);
	h.show();
	h.insert(5);
	h.show();
	cout<<endl;
	cout<<h.ExtractMin()<<endl;
	h.show();
	
	h.delete_key(3);
	h.show();

	return 0;
}