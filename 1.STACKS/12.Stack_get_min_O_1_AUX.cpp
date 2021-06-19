#include<bits/stdc++.h>
using namespace std;

struct MyStack
{	
	stack<int> s;
	int min;

	void push(int x)
	{
		if(s.empty())
		{
			s.push(x);
			min = x;
		}
		else if(x<=min)
		{
			s.push(x-min);
			min = x;
		}
		else
		{
			s.push(x);
		}

	}


	int pop()
	{
		int t = s.top();
		s.pop();
		if(t<=0)
		{
			int res = min;
			min = min+t;
			return res;
		}
		return t;
	}
	int peek()
	{
		int t = s.top();
		return (t<=0)?t:min;

	}
	int getMin()
	{
	return min;	
	}

};
int main()
{
	MyStack s;
	s.push(10);
	s.push(1);
	s.push(20);
	cout<<s.pop()<<endl;
	cout<<s.getMin();
	return 0;
}