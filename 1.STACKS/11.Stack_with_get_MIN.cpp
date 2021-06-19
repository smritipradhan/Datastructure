#include<bits/stdc++.h>
using namespace std;



struct Mystack
{


	stack<int> ms;
	stack<int> as;

	void push(int x)
	{
		if(ms.empty())
		{
			ms.push(x);
			as.push(x);
		}

		ms.push(x);
		if(ms.top()<=as.top())
			as.push(x);


	}
	void pop()
	{

		if(ms.top() == as.top())
			as.pop();
		ms.pop();
	}
	int top()
	{
		return ms.top();
	}
	int getMin()
	{
		return as.top();
	}


	
};
int main()
{
	Mystack s;
	s.push(10);
	s.push(1);
	s.push(2);
	cout<<s.getMin();
	cout<<endl;
	s.pop();
	cout<<s.getMin();
	s.pop();
	cout<<endl;
	cout<<s.getMin();
	return 0;
}
