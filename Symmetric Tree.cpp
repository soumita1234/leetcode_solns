class Solution {
public:
    
    bool isSymmetric(TreeNode* root) {
        TreeNode *p = root->left, *q = root->right; 
        return fn(p, q); 
    }
    
    bool fn(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true; 
        if (p == NULL || q == NULL) return false; 
        return p->val == q->val && fn(p->left, q->right) && fn(p->right, q->left); 
    }
};
