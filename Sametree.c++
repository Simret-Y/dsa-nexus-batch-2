class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Case 1: both are null
        if (p == nullptr && q == nullptr)
            return true;

        
        if (p == nullptr || q == nullptr)
            return false;

        // Case 3: values must match + check left + check right
        if (p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
