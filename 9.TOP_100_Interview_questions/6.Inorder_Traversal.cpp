/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,3,2]
*/


class Solution {
public:
    
    void helper(TreeNode* root,vector<int>& v) //This function is same as the normal inorder traversal with little bit twist of passing with the vector that is needed to be returned.
    {
        if(root==NULL)
            return;
        
        helper(root->left,v);     
        v.push_back(root->val);  //Instead of printing we add it to the vector which will be returned .
        helper(root->right,v);      
        
    } 
    vector<int> inorderTraversal(TreeNode* root) 
    {
    vector<int> v;   //Initialised a vector that will be returned at the end .
    helper(root,v);   //Calling the helper function and passing the empty vector also
    return v;    
    }
};
