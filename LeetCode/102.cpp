class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        if(root != NULL) que.push(root);
        vector<vector<int>> res;
        while(!que.empty()){
            int size = que.size();
            vector<int> line;
            while(size--){
                TreeNode* node = que.front();
                que.pop();
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
                line.push_back(node->val);
            }
            res.push_back(line);
        }
    return res;
    }
};
