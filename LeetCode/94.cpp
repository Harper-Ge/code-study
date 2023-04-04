class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>res;
        TreeNode* node = root;
        while(!st.empty() || node != NULL){
            
            if(node != NULL) {
                st.push(node);
                node = node->left;
            }else{
                node = st.top();
                res.push_back(node->val);
                st.pop();
                node = node->right;
            } 
        }
        return res;
    }
};
