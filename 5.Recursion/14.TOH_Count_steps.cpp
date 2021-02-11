
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    int sum = 0;
    long long toh(int N, int A, int C, int B) 
    {
    if(N==1)
    {
    cout<<"move disk 1 from rod "<<A<<" to rod "<<C<<endl;sum++;
    return sum;
    }
    toh(N-1,A,B,C);  
    cout<<"move disk "<<N<<" from rod "<<A<<" to rod "<<C<<endl;
    sum++;
    toh(N-1,B,C,A);
        
    }

};
