#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;	
Node* next;

Node(int x)
{
	data = x;
	next = NULL;
}
};

struct Queue
{
	Node* front;
	Node* rear;
	Queue()
	{
front =NULL;
rear = NULL;
	}
void enqueue(int x)
{
Node* temp = new Node(x);
if(front==NULL)
	{front = rear = temp;}
else
{
	rear->next = temp;
	rear = temp; 
}
}
void dequeue()
{
Node* temp = front;


front = front->next;
if(front==NULL)
	rear = NULL;
delete(temp);

}
};




int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);

	q.dequeue();
	cout<<(q.front)->data<<endl;
	cout<<(q.rear)->data<<endl;

	q.dequeue();
	cout<<(q.front)->data<<endl;
	cout<<(q.rear)->data<<endl;

	q.dequeue();
	cout<<(q.front)->data<<endl;
	cout<<(q.rear)->data<<endl;

	q.dequeue();
	cout<<(q.front)->data<<endl;
	cout<<(q.rear)->data<<endl;

	return 0;
}