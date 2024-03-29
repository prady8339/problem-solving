class Solution {
public:
    int maxFreq = 0, currFreq = 0, precursor = INT_MIN;
    vector<int> res;

    vector<int> findMode(TreeNode *root)
    {
        inorderTraversal(root);
        return res;
    }

    void inorderTraversal(TreeNode *root)
    {
        if (root == NULL) return; 
        inorderTraversal(root->left); 
        if (precursor == root->val) currFreq++;
        else currFreq = 1;
        if (currFreq > maxFreq)
        {
            maxFreq = currFreq;
            res = {root->val};
        }
        else if (currFreq == maxFreq)
        {
            res.push_back(root->val);
        }
        precursor = root->val; 
        inorderTraversal(root->right); 
    }
};