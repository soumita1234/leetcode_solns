class Solution {
public:
    void inorder(TreeNode*root,vector<int> &a){
        if(root==NULL){
            return;
        }
        stack<TreeNode*>s;
        TreeNode*temp=root;
        
        while(!s.empty() || temp!=NULL){
            while(temp!=NULL){
                s.push(temp);
                temp=temp->left;
            }
            temp=s.top();
            s.pop();
            a.push_back(temp->val);
            temp=temp->right;
        }
    }
    bool isValidBST(TreeNode* root) {
        vector<int>a;
        inorder(root,a);
        for(auto i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]){
                return false;
            }
        }
     return true;   
    }
};
