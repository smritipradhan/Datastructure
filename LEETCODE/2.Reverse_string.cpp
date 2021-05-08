class Solution {
public:
    void reverseString(vector<char>& s) 
    {
    int i = s.size()-1;
    int j = 0;
          while(j<i)
        {
            char temp = s[i];
              s[i] = s[j];
              s[j] = temp;
              j++;
              i--;
                  
            
        }
        
   
        
    }
};
