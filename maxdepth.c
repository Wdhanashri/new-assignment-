public class Solution {
    public int MaxDepth(TreeNode root) {
        // Base Case: If the tree is empty, depth is 0
        if (root == null) {
            return 0;
        }

        // Recursively find the depth of left and right subtrees
        int leftDepth = MaxDepth(root.left);
        int rightDepth = MaxDepth(root.right);

        // Maximum depth is the larger of the two depths plus 1 (for the root node)
        return Math.Max(leftDepth, rightDepth) + 1;
    }
}
