#include<bits/stdc++.h>
using namespace std;

const int C = 256;
int leftmost(string str)
{

int count[C] = {0};

for(int i=0;i<str.length();i++)
{
count[str[i]]++;
}

for(int i=0;i<256;i++)
{
	if(count[str[i]]>1)
		return i;
}
return -1;

}

int main()
{
	string str ="abbc";
	cout<<leftmost(str);
	return 0;
}