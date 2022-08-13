class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>ans;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                ans.push_back(node->val);
            }
            result.push_back(ans);
        }
        int n=result.size();
        for(int i=1;i<n;i=i+2){
            reverse(result[i].begin(),result[i].end());
        }
        //reverse(result.begin(), result.end());
        return result;
    }
};