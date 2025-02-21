public class Solution {
    public bool HasPathSum(TreeNode root, int targetSum) {
        // If the root is null, return false since there is no path
        if (root == null) return false;
        
        // If it's a leaf node, check if the remaining sum equals the node value
        if (root.left == null && root.right == null) {
            return targetSum == root.val;
        }
        
        // Recursively check left and right subtrees with the updated target sum
        return HasPathSum(root.left, targetSum - root.val) || HasPathSum(root.right, targetSum - root.val);
    }
}
