#include<bits/stdc++.h>
using namespace std;

int main()
{

	string str1,str2;
	cin>>str1>>str2;

	if(str1==str2)
		cout<<"Both strings are same";
	else if(str1<str2)
		cout<<"string 1 is lexicographically smaller than string 2";
	else
		cout<<"string 1 is lexicographically larger than string 2";





	return 0;
}