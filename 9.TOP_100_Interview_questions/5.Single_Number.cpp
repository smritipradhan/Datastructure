/*

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

Input: nums = [2,2,1]
Output: 1


*/
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
    int res = 0;
        
    for(int i = 0;i<nums.size();i++)
    {
        
        res = res^nums[i];  //XOR operation .A number Xor with itself yeilds 0.Returning the number with the occurence one time.
    }
      return res;  
        
        
    
    }
};
