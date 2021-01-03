//Reverse a string using Stack
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;
    string str = "SmritiPradhan";
    cout<<"The original STring is---";
    for(int i= 0;i<str.size();i++)
    {
        s.push(str[i]);
    }
    cout<<str<<endl;
    string res;
    while(!s.empty())
    {
        char c = s.top();
        res += c;
        s.pop();
    }
    
    cout<<"The reversed string is--"<<res;
}
