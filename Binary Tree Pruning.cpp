lass Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL) return NULL;
        if(root->left) root->left = pruneTree(root->left);
        if(root->right) root->right = pruneTree(root->right);
        if(root->left == NULL and root->right == NULL and root->val == 0) return NULL;
        return root;
    }
};
