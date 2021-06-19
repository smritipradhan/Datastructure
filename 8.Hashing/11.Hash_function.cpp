#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_set<string> s = {"a","smriti","pradhan"};

	unordered_set<string>::hasher fn = s.hash_function();

	cout<<fn("smriti")<<endl;
	cout<<fn("a");



	return 0;
}