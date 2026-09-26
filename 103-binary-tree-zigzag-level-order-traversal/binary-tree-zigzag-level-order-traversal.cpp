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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root == nullptr) return ans;
        bool flag = false;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>level;
            stack<int> rev;
            for(int i=0 ; i<n ; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);

                if(flag)
                {
                    rev.push(node->val);
                }else{
                    level.push_back(node->val);
                }

            }
            flag = !flag;
            while(!rev.empty())
            {
                level.push_back(rev.top());
                rev.pop();
            }
            ans.push_back(level);
        }
        return ans;
    }
};