class Solution {
public:
    int height(TreeNode* node){
        if(node==NULL) return -1;
        
        int lDepth = height(node->left);
        int rDepth = height(node->right);
        //cout<<lDepth<<rDepth<<endl;
        return max(lDepth+1,rDepth+1);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        
        int lh=height(root->left);
        int rh=height(root->right);
        //cout<<lh<<" "<<rh;
        int ans=abs(lh-rh);
        if(ans<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        return false;
        
    }
};