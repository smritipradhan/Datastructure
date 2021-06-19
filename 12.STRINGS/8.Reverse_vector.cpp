#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{

stringstream str(s);
string words;
vector<string> vec;

while(str>>words) //reading stringstream objects
	vec.push_back(words);

reverse(vec.begin(),vec.end());


string res;

for(auto it:vec)
{
	res += " "+it;
}
res.erase(0,1);
cout<<res;
}



int  main()
{

	string s = "The sky is blue";
	reverse(s);
	return 0;
}