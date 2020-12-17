//Making the enqueue operation more costly

#include<bits/stdc++.h>
using namespace std;

struct Queue
{
stack<int> s1;
stack<int> s2;

void enqueue(int x)
{

while(!s1.empty()) //shifts the s1's element to s2 until the stack is empty
{
s2.push(s1.top());
s1.pop();

}
s1.push(x);//add
while(!s2.empty())//push back all the elements from s2 to s1
{
s1.push(s2.top());
s2.pop();
}

}
int dequeue()
{
if (s1.empty()) 
{ 
   cout << "Q is Empty"; 
   exit(0); 
 } 
  
        // Return top of s1 
        int x = s1.top(); 
        s1.pop(); 
        return x; 
}

};
int main()
{
Queue q ;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
cout<<q.dequeue()<<"\n";
cout<<q.dequeue()<<"\n";
cout<<q.dequeue();

return 0;
}

