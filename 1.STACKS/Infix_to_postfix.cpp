#include<bits/stdc++.h>
using namespace std;

int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 

void InfixToPostfix(string s)
{
string res;
stack<char> sta;
int n = s.length();
sta.push('N');

for(int i = 0;i<n;i++)
{
//CASE 1: When we get and operand
if(s[i]>='a' && s[i] <='z' || s[i]>='A' && s[i] <='Z')
{
    //Just Push it into the result
    res = res + s[i];
}
//Case 2:When we encounter '('
else if(s[i]=='(')
{
    sta.push('(');
}
//Case  : when we encounter ')'
else if(s[i]==')')
{
    while(sta.top() != 'N' && sta.top() != '(')
    {
        char ch = sta.top();
        sta.pop();
        res  = res+ch;
    }
    if(sta.top()=='(')
    {
        sta.pop();
    }
 }
 else
 {
    while(sta.top() != 'N' && prec(sta.top()) >= prec(s[i]))
    {
        char c = sta.top();
        sta.pop();
        res  = res + c;
    }
    sta.push(s[i]);
     
     
 }
}
  while(sta.top() != 'N') 
    { 
        char c = sta.top(); 
        sta.pop(); 
        res += c; 
    } 
      
   
    cout<<res<<endl;
}

 
int main()
{
string exp = "a+b*(c^d-e)^(f+g*h)-i"; 
InfixToPostfix(exp); 
return 0; 
}
//abcd^e-fgh*+^*+i-



