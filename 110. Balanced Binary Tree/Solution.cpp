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
    pair<bool, int> helper(TreeNode* root, int m){
        if(root == NULL){
            return {true, 0}; 
        }
        pair<bool, int> left = helper(root->left, m);
        pair<bool, int> right = helper(root->right, m);

        return {left.first && right.first && abs(left.second-right.second) < 2, 1 + max(left.second, right.second)};
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        return helper(root, 0).first;
    }
};