#include<bits/stdc++.h>
using namespace std;

struct STACK
{
	queue<int> q1;
	queue<int> q2;
		int curr_size; 
		STACK()
		{
			curr_size  = 0;
		}

	int top1()
	{
		if(q1.empty())
			return -1;
		return q1.front();
	}

	int pop()
	{
		if(q1.empty())
			return -1;
		int p = q1.front();
		q1.pop();
		curr_size--;
		return p;
	}

	int peek()
	{
		return q1.front();
	}

	void push(int x)
	{
		curr_size++; 

		// Push x first in empty q2 
		q2.push(x); 

		// Push all the remaining 
		// elements in q1 to q2. 
		while (!q1.empty()) { 
			q2.push(q1.front()); 
			q1.pop(); 
		} 

		// swap the names of two queues 
		queue<int> q = q1; 
		q1 = q2; 
		q2 = q; 


	}

	int size() 
	{ 
		return curr_size; 
	} 



};




int main()
{
	STACK s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;

	cout<<s.top1()<<endl;

	return 0;
}