//O(n)

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode* ptr,*temp=root;
        queue <TreeNode*>q;
        vector <vector<int>>ans;
        if (root==NULL)
            return ans;
        q.push(temp);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                ptr=q.front();
                q.pop();
                if(ptr->left!=NULL)
                    q.push(ptr->left);
            if(ptr->right!=NULL)
                q.push(ptr->right);
                level.push_back(ptr->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
