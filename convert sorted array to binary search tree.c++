

class Solution {
public:
    
    TreeNode* buildBST(vector<int>& nums, int left, int right) {
        // Base case
        if (left > right) return nullptr;
        
        // Pick middle element
        int mid = left + (right - left) / 2;
        
        // Create root node
        TreeNode* root = new TreeNode(nums[mid]);
        
        // Build left subtree
        root->left = buildBST(nums, left, mid - 1);
        
        // Build right subtree
        root->right = buildBST(nums, mid + 1, right);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }
};
