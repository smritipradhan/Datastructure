//datastructure with min-max operation only
//extract the min max at O(1) time , insert , delete , get (MIN/MAX) at O(1) time complexity

#include<bits/stdc++.h>
using namespace std;

struct MyDq
{
deque<int> dq;

void insertMin(int x)
{
dq.push_front(x);
}
void insertMax(int x)
{
dq.push_back(x);

}
int extractMax()
{
int p = dq.back();
dq.pop_back();
return p;

}
int extractMin()
{

int p = dq.front();
dq.pop_front();
return p;
}
int getMin()
{
return dq.front();

}
int getMax()
{
return dq.back();


}

};




int main()
{
    struct MyDq ds;


ds.insertMin(10);
    ds.insertMax(15);
    ds.insertMin(5);
    
    int x= ds.extractMin();
    cout << x << endl;
    
    x= ds.extractMax();
    cout << x << endl;
    
    ds.insertMin(8);
    
    return 0;
}
