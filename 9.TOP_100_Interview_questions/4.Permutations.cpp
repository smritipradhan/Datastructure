/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 
Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]


*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {           
      vector<vector<int>> res; //Initialising vector of vector .
      vector<int> Itr = nums; 
        
      res.push_back(Itr);
      next_permutation(Itr.begin(),Itr.end()); 
      
      while(Itr!=nums) //looping until the permutaion completes and generates num again.
      {
         res.push_back(Itr);
         next_permutation(Itr.begin(),Itr.end());  //generating the next permutations 
          
          
      }
      
      return res;  
        
    
        
    }
};
