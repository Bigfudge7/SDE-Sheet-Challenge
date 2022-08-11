class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxSum=INT_MIN,maxSumLevel=0,lvl=0;
        vector<TreeNode*>v{root};
        while(!v.empty()){
            vector<TreeNode*>v1;
            int sum=0;
            ++lvl;
            for(auto n:v){
                sum+=n->val;
                if(n->left){
                    v1.push_back(n->left);
                }
                if(n->right){
                    v1.push_back(n->right);
                }
            }
            if(sum>maxSum) {
                maxSumLevel=lvl;
            }
            maxSum=max(maxSum,sum);
            swap(v,v1);
        }
        return maxSumLevel;
    }
};