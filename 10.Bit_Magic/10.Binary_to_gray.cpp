/*Properties of Gray code --

In gray code succesive bits only differ by one bit
n = 2
00
01
11
10


n = 9 (1001)
To convert --
1)The MSB of gray and Binary are same
2)And other bit is XOR of index bit and previous index bit 

*/

#include<bits/stdc++.h>
using namespace std;

void gray_to_binary(int n)
{

	int result = 0;
	result = n^(n>>1);

	cout<<result;
}

int main()
{
	int n =0;
	cin>>n;
	gray_to_binary(n);
	return 0;
}