#include<bits/stdc++.h>
using namespace std;

struct Queue
{
	int cap;
	int size;
	int* arr;

	Queue(int c)
	{
		cap = c;
		size = 0;
		arr = new int[c];
	}

bool isFull()
{
return (size==cap);
}
bool isEmpty()
{
	return (size==0);
}
int getFront()
{
if(isEmpty())
	return -1;
else
	return 0; //return the position can return arr[0] for the element 
}
int getRear()
{
if(isEmpty())
	return -1;
else
	return size-1; // return the position not the array element 
}
void enqueue(int x)
{
if(isFull())
	return;

arr[size] = x;
size++;

}
void dequeue()
{
if(size==0)
	return;

for(int i=0;i<size-1;i++)
{
	arr[i] = arr[i+1];
}
size--;
}
};




int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	cout<<q.getFront()<<endl;
	cout<<q.getRear()<<endl;
	q.dequeue();
	q.dequeue();
	cout<<q.getFront()<<endl;
	cout<<q.getRear()<<endl;
	return 0;
}