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
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        if(targetSum-root->val==0&&root->left==NULL&&root->right==NULL)
            return true;
        return hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
    }
};

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
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        queue<TreeNode*>st;
        st.push(root);
        int res=0;
        int leftsum=0,rightsum=0;
        while(!st.empty())
        {
            int size=st.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node=st.front();
                st.pop();
                if(!node->left&&!node->right)
                    res|=node->val==targetSum;
                
                    if(node->left){
                        node->left->val+=node->val;
                        st.push(node->left);
                    }
                    if(node->right){
                        node->right->val+=node->val;
                        st.push(node->right);
                    }
                
            
                   }
                   }
        return res;
    }
};
