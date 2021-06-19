//program to implement Queue efficiently
#include<bits/stdc++.h>
using namespace std;

struct Queue
	{
		int front;
		int cap;
		int size;
		int* arr;
		Queue(int c)
		{
			cap = c;
			size = 0;
			front = 0;
			arr = new int[c]; 
		}
		bool isEmpty()
		{
			return (size == 0);
		}
		bool isFull()
		{
			return (size == cap);
		}
		int getFront()
		{
			if(isEmpty())
				return -1;
			else
				return front;
		}
		int getRear()
		{
			if(isEmpty())
				return -1;
			else
				return (front+size-1)%cap;;
		}

		void enqueue(int x)
		{
			if(isFull())
				return;
			int rear = getRear();
			rear = (rear+1)%cap;
			arr[rear] = x;
			size++;
			
		}
		void dequeue()
		{
			if(isEmpty())
				return;
			front = (front+1)%cap;
			size--;

		}

};
int main()
{
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);

	q.enqueue(30);
	q.enqueue(40);

	q.enqueue(50);
	
	cout<<q.getFront()<<"   ";
	cout<<q.getRear()<<endl;

	q.dequeue();
	q.dequeue();

	cout<<q.getFront()<<"   ";
	cout<<q.getRear()<<endl;

q.enqueue(100);
	q.enqueue(200);
cout<<q.getFront()<<"   ";
	cout<<q.getRear()<<endl;
 

	return 0;
}