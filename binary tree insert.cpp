//Iterative

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ins=new TreeNode(val);
        if(root==NULL)
            return ins;
        TreeNode* curr=root;
        while(curr!=NULL)
        {
            if(curr->val>val)
            {
                if(!curr->left)
                {
                    curr->left=ins;
                    return root;
                }
                else
                    curr=curr->left;
            }
            else if(curr->val<val)
            {
                if(!curr->right)
                {
                    curr->right=ins;
                    return root;
                }
                else
                    curr=curr->right;
            }
        }
        return root;
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL)
            root=new TreeNode(val);
        if(val<root->val)
            root->left=insertIntoBST(root->left,val);
        if(val>root->val)
            root->right=insertIntoBST(root->right,val);
        return root;
        
    }
};
