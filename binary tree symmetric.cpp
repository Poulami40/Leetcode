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

//Recursive

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
    bool symmetric(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL&&root2==NULL)
            return true;
        if(root1&&root2&&root1->val==root2->val)
            return symmetric(root1->left,root2->right)&&symmetric(root1->right,root2->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return symmetric(root,root);
    }
    
};
