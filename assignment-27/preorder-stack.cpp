class Solution {
    public:
    void solve(TreeNode* root, vector<int>& ans){
        if(root==NULL){
            return;
        }
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* cur = s.top();
            s.pop();
            if(cur->right!=NULL){
                s.push(cur->right);
            }
            if(cur->left!=NULL){
                s.push(cur->left);
            }
            ans.push_back(cur->val);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};
