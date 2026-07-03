// Last updated: 03/07/2026, 12:25:33
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
    // Memo approach
    map<pair<int,int>,vector<TreeNode*>> mp;
    vector<TreeNode*> solve(int start,int end){
        //base case
        if(start > end){
            return {NULL};
        }

        // if the start is same as end then
        if(start == end)
        {
            // create a new root node and return it
            TreeNode* root = new TreeNode(start);
            return mp[{start,end}] = {root};
        }

        // in memo if we have alreafy stored the anwer of start,end pair then directly return from here
        if(mp.find({start,end}) != mp.end()){
            return mp[{start,end}];
        }

        vector<TreeNode*> res;
        // now iterate through start to end and try to make each as root node 
        for(int i = start;i<=end;i++){
            vector<TreeNode*> left_bsts  = solve(start,i-1);
            vector<TreeNode*> right_bsts =  solve(i+1,end);

            // now we have left and right bsts iterate through each and try make a pair
            for(auto leftRoot : left_bsts){
                for(auto rightRoot : right_bsts){
                    TreeNode* root = new TreeNode(i); // make each root here
                    root->left = leftRoot;
                    root->right = rightRoot;
                    res.push_back(root);
                }
            }

        }
        return mp[{start,end}] = res;
    }

    /*
    // Recursive approach

    // we have to return the root only compiler itself will traverse for the remaining nodes
    vector<TreeNode*> solve(int start,int end){
        //base case
        if(start > end){
            return {NULL};
        }

        // if the start is same as end then
        if(start == end)
        {
            // create a new root node and return it
            TreeNode* root = new TreeNode(start);
            return {root};
        }

        vector<TreeNode*> res;
        // now iterate through start to end and try to make each as root node 
        for(int i = start;i<=end;i++){
            vector<TreeNode*> left_bsts  = solve(start,i-1);
            vector<TreeNode*> right_bsts =  solve(i+1,end);

            // now we have left and right bsts iterate through each and try make a pair
            for(auto leftRoot : left_bsts){
                for(auto rightRoot : right_bsts){
                    TreeNode* root = new TreeNode(i); // make each root here
                    root->left = leftRoot;
                    root->right = rightRoot;
                    res.push_back(root);
                }
            }

        }
        return res;
    }
    */

    vector<TreeNode*> generateTrees(int n) {
        return solve(1,n);
    }
};