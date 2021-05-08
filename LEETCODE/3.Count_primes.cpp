//sieve of erastosthenes
class Solution {
public:
    int countPrimes(int n) 
    {
        if(n<=1)
            return 0;
       vector<bool> isPrime(n,true);
        
       int count = 0;
        
       for(long long int i = 2;i<n;i++)
       {
           if(isPrime[i])
           {
               count++;
               for(long long int j=i*i;j<=n;j=i+j)
               {
                   isPrime[j] = false;
               }
               
               
           }
           
           
           
           
       }
        return count;
        
        
        
    }
};
