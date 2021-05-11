class Solution {
vector<int> a[2001];
void lovelRead(TreeNode* root,int k){
   if(root==NULL) return ;
    a[k].push_back(root->val);    
    if(root->left ) lovelRead(root->left ,k+1);
    if(root->right) lovelRead(root->right,k+1);
}
public:
    vector<vector<int>> levelOrder(TreeNode* root) {     
   
        vector<vector<int>> b;
   
        lovelRead(root,0);
        
        for(int i=0;i<2001;i++)
           if(a[i].size()>0) b.push_back(a[i]);
        
       
         return b;
    }
};
