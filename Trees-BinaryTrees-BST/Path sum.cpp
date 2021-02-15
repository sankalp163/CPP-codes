void pathSumHelper(TreeNode *root, int remainingSum, vector<int> &current, vector<vector<int> > &ret) {
    if (root == NULL) return;

    remainingSum -= root->val;
    current.push_back(root->val);

    // If we have reached a leaf, time to check the sum. 
    if (root->left == NULL && root->right == NULL) {
        if (remainingSum == 0) {
            ret.push_back(current);
        }
        current.pop_back();
        return;
    }

    // check the left and the right subtree.
    pathSumHelper(root->left, remainingSum, current, ret);
    pathSumHelper(root->right, remainingSum, current, ret);
    current.pop_back();
    return;
}
