#include<bits/stdc++.h>
using namespace std;

bool isPallin(string s)
{

int begin = 0;
int end = s.length()-1;

while(begin<end)
{
if(s[begin]!=s[end])
	return false;
begin++;
end--;

}

return true;

}
int main()
{
	string str;
	cin>>str;
	cout<<isPallin(str);
	return 0;
}