// Last updated: 03/07/2026, 12:25:21
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i = 0;
        int j = 0;
        int n = inorder.size();
        stack<TreeNode*> parent;
        stack<TreeNode*> child;
        while(i < n || j < n)
        {
            if(!parent.empty() && postorder[j] == parent.top()->val)
            {
                TreeNode* cur = parent.top();
                parent.pop();
                if(!child.empty()){ cur->right = child.top(); child.pop(); }
                if(!child.empty() && cur->left == nullptr){ cur->left = child.top(); child.pop(); }
                child.push(cur);
                j++;
            }
            else if(inorder[i] == postorder[j])
            {
                TreeNode* cur = new TreeNode(inorder[i++]);
                if(!child.empty()){ cur->left = child.top(); child.pop(); }
                child.push(cur);
                j++;
            }
            else
            {
                TreeNode* cur = new TreeNode(inorder[i++]);
                if(!child.empty()){ cur->left = child.top(); child.pop(); }
                parent.push(cur);
            }
        }
        return child.top();
    }
};