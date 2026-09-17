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
    int height(TreeNode* root)
    {
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        
        ans = lh+rh;
        int left_dia = diameterOfBinaryTree(root->left);
        int right_dia = diameterOfBinaryTree(root->right);

        return max(ans,max(left_dia,right_dia));
    }
};