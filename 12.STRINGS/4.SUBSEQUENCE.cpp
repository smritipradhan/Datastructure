#include<bits/stdc++.h>
using namespace std;

bool isSub(string str1,string str2)
{
int i=0;
int j=0;
int n1 = str1.length();
int n2 = str2.length();


for(i;i<n1 && j<n2;i++)
{

if(str1[i] == str2[j])
	j++;

}
return (j==n2);



}

int main()
{
string str1,str2;
cin>>str1>>str2;
cout<<isSub(str1,str2);
return 0;
}