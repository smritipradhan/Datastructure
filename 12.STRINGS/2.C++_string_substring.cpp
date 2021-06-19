#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string str = "101";
	//program to find all the substring of a string
	vector<string> v;
	for(int i=0;i<str.length();i++)
	{
		for(int len=1;len <=str.length()-i;len++)
		{
		
				v.push_back(str.substr(i,len));

		}
	}
	for(auto x:v)
	{
		cout<<x<<endl;
	}

	return 0;
}