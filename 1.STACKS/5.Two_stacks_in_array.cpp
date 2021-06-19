#include<bits/stdc++.h>
using namespace std;

struct MyStacks
{
int* arr;
int cap,top1,top2;

MyStacks(int n)
{
cap = n;
top1 = -1;
top2 = cap;
arr = new int[n];
}

void push1(int x)
{
if(top1<top2-1)
{
top1++;
arr[top1] =x;

}
else
{
	cout<<"Stack Overflow";
	exit(1);
}



}
void push2(int x)
{
if(top1<top2-1)
{
top2--;
arr[top2] = x;
}

else
{
	cout<<"Stack Overflow";
	exit(1);
}
}

int pop1()
{
if(top1>=0)
{
	int res = arr[top1];
	top1--;
	return res;
}
else
{
	cout<<"Stack Underflow";
	exit(1);
}


}
int pop2()
{
if(top2<cap)
{
	int res = arr[top2];
	top2++;
	return res;
}
else
{
	cout<<"Stack Underflow";
	exit(1);
}


}
};



int main()
{
	MyStacks s(7);
	s.push1(10);
	s.push2(20);
	cout<<s.pop1()<<endl;
	cout<<s.pop2()<<endl;
	return 0;
}