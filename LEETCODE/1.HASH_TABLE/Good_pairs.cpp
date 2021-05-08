//Program to find the number of good pairs
//Good pairs are those in which nums[i] == nums[j] and i<j
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
   
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
            
        }
        int good_pairs = 0;
        for(auto i:umap)
        {
            good_pairs += ((i.second)*(i.second-1))/2;
            
        }
        return good_pairs;
        
        
    }
};
    
