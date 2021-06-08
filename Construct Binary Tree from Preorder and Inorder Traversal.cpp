class Solution {
public:
    
    int preI=0;
    TreeNode* buildhelper(vector<int>& pre,vector<int>& in,int inS,int inE)
    {
        if(inS>inE) return NULL;
        
        TreeNode* curr=new TreeNode(pre[preI++]);
        
        int index;
        
        for(int i=inS;i<=inE;i++) {
            if(in[i]==curr->val){
                index=i;
                break;
            }
        }
        
        curr->left=buildhelper(pre,in,inS,index-1);
        curr->right=buildhelper(pre,in,index+1,inE);
        
        return curr;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        
        return buildhelper(preorder,inorder,0,n-1);
    }
};
