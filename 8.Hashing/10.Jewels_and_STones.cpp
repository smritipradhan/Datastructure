class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
    int count = 0;
    for(char i:S)
    {
        if(J.find(i) != -1)
        {
            count++;
        }
        
        
    }
        return count;
        
        
    }
};
