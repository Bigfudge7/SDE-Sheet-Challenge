class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
        //return result;
        /*vector<vector<int>>v;
        stack<vector<int>>s;
        int n=result.size();
        for(int i=0;i<n;i++){
            s.push(result[i]);
        }
        for(int i=0;i<n;i++){
            vector<int>temp=s.top();
            v.push_back(temp);
            s.pop();
        }*/
        reverse(result.begin(), result.end());
        return result;
    }
};