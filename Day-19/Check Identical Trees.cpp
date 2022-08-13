class Solution {
public:
    vector<int>ans1;
    vector<int>ans2;
    
    void preorder1(TreeNode* r){
        if(r==NULL) {
            ans1.push_back(-1);
            return;}
        ans1.push_back(r->val);
        preorder1(r->left);
        preorder1(r->right);
    }
    void preorder2(TreeNode* r){
        if(r==NULL) {
            ans2.push_back(-1);
            return;}
        ans2.push_back(r->val);
        preorder2(r->left);
        preorder2(r->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        preorder1(p);
        preorder2(q);
        for(int i=0;i<ans1.size();i++){
            if(ans1[i]!=ans2[i]){
                ans1.clear();
                ans2.clear();
                return false;}
        }
        ans1.clear();
    ans2.clear();
        return true;
    }
};