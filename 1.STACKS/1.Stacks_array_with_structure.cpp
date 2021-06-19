#include<bits/stdc++.h>
using namespace std;

struct MyStack
{
int* arr; //pointer to an array
int top;
int cap; //total capacity of the stack
MyStack(int c)
{
	cap = c;
	top = -1;
	arr = new int[cap];
}

void push(int x)
{
	if(top==cap-1)
	{
		cout<<"Stack is full";
		return;
	}
	top++;
	arr[top] = x;
}

int pop()
{
if(top==-1)
{
	cout<<"Stack is Empty"<<endl;
	return INT_MIN;
}
int res = arr[top];
top--;

}
int peek()
{
if(top==-1)
{
	cout<<"Stack is Empty"<<endl;
	return INT_MIN;
}
return arr[top];
}
bool isEmpty()
{
	return (top==-1);
}
int size()
{
	return (top+1);
}



};

int main()
{
	MyStack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	return 0;
}