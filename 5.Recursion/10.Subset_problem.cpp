//program to find the subset of a string using recursion

#include<iostream>
using namespace std;

void subset(string s,string cur,int index)
{
if(s.length()==index)
{
    cout<<cur<<" ";
    return;
}
    subset(s,cur,index+1);
    subset(s,cur+s[index],index+1);
}
int main()
{
    string s = "ABC";
    
    subset(s,"",0);
    return 0;
}
