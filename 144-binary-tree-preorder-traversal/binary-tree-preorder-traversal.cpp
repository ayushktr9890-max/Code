class Solution {
public:
    void preorder(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;

        result.push_back(root->val);   // visit root
        preorder(root->left, result); // left
        preorder(root->right, result);// right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }
};