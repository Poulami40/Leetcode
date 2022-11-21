//Recursion

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return root;
        queue <TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty())
        {
            TreeNode* left=q.front();
            q.pop();
            TreeNode* right=q.front();
            q.pop();
            if((left&&!right)||(!left&&right))
                return false;
            else if(left&&right)
            {
                if(left->val!=right->val)
                    return false;
                q.push(left->left);
                q.push(right->right);
                q.push(left->right);
                q.push(right->left);
            }
            
        }
        return true;
    }
    
};
