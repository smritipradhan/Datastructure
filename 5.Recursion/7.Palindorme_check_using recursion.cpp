//Check whether a number is palindrome or not using recursion
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str,int start,int end)//passed by reference to avoid string copy in c++
{
if(start>=end) //base case n==0 or n==1 will be handled
return true;

return (str[start]==str[end])&&(isPalindrome(str,start+1,end-1));

}
int main()
{
    string s = "abba";
    int start = 0;
    int end = s.size()-1;
    cout<<isPalindrome(s,start,end);
    cout<<"\n";
    string s1 = "abab";
    end = s1.size()-1;
    cout<<isPalindrome(s1,start,end);
    
    
    return 0;
}
