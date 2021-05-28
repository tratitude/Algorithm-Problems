/*
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/
// Time complexity: O(n), Space complexity: O(log(n))
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr)
            return nullptr;
        
        invertTree(root->left);
        invertTree(root->right);
        
        if(root->left != nullptr || root->right != nullptr){
            swap(root->left, root->right);
        }
        return root;
    }
};

