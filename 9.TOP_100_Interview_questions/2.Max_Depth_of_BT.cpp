//program to find the max depth of the binary tree


class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
    if(root==NULL)
    {
        return 0;
    }
    
        
    return 1 + max(maxDepth(root->left),maxDepth(root->right));    
        
        
        
        
        
    }
};
