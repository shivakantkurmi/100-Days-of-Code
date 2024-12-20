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
private:
    void Traverse(TreeNode* left, TreeNode* right, bool reverse){
        if(left == NULL || right == NULL) return;
        if(reverse) swap(left->val, right->val);
        Traverse(left->left, right->right, !reverse);
        Traverse(left->right, right->left, !reverse);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        Traverse(root->left, root->right, true);
        return root;
    }
};
