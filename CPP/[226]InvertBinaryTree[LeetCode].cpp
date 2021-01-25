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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode *> pending;
        pending.push(root);

        while (!pending.empty()) {
            TreeNode* current = pending.front();
            pending.pop();

            if (current == NULL)
                continue;

            swap(current->left, current->right);
            pending.push(current->left);
            pending.push(current->right);
        }
        return root;
    }
};
