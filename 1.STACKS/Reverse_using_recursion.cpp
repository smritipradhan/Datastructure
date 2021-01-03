
#include<bits/stdc++.h> 
using namespace std; 
stack<int> s; 
  

int insert_at_bottom(int x) 
{ 
  
    if(s.size() == 0) 
    s.push(x); 
  
    else
    { 

        int a = s.top(); 
        s.pop(); 
        insert_at_bottom(x); 

        s.push(a); 
    } 
} 

int reverse() 
{ 
    if(s.size()>0) 
    { 
        int x = s.top(); 
        s.pop(); 
        reverse(); 

        insert_at_bottom(x); 
    } 
} 
  
int main() 
{ 

    s.push(1); 
    s.push(2); 
    s.push(3); 
    s.push(4); 


    reverse(); 
   while(!s.empty())
   {
       cout<<s.top()<<endl;
       s.pop();
   }
    return 0;  
 
} 
