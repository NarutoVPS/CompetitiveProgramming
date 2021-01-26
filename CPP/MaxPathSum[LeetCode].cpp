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
    pair<int, int> maxPathSum(TreeNode* root, int &runningMaxSum) {
        if (root == NULL)
            return make_pair(0,0);

        pair<int, int> left = maxPathSum(root->left, runningMaxSum);
        pair<int, int> right = maxPathSum(root->right, runningMaxSum);

        int maxSumWithBranch = max(max(left.first + root->val, right.first + root->val), root->val);
        int maxSumWithTraingle = left.first + root->val + right.first;

        runningMaxSum = max(max(maxSumWithBranch, maxSumWithTraingle), runningMaxSum);

        return make_pair(maxSumWithBranch, maxSumWithTraingle);
    }

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        maxPathSum(root, ans);
        return ans;
    }
};
