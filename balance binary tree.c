public class Solution {
    public bool IsBalanced(TreeNode root) {
        if (root == null) return true;

        int left = Height(root.left);
        int right = Height(root.right);
        if (Math.Abs(left - right) > 1) return false;
        return IsBalanced(root.left) && IsBalanced(root.right);
    }

    public int Height(TreeNode root) {
        if (root == null) {
            return 0;
        }

        return 1 + Math.Max(Height(root.left), Height(root.right));
    }
}
