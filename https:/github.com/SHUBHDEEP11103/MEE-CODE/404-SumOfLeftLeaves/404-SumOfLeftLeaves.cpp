// Last updated: 03/07/2026, 12:23:40
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;

        int sum = 0;

        // check if left child exists and is a leaf
        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }

        // recurse on left and right subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};