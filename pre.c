public class Solution {
    public IList<int> PreorderTraversal(TreeNode root) {
        List<int> result = new List<int>();
        PreorderHelper(root, result);
        return result;
    }
    
    private void PreorderHelper(TreeNode node, List<int> result) {
        if (node == null) {
            return;
        }
        
        // Visit the root node
        result.Add(node.val);
        
        // Traverse the left subtree
        PreorderHelper(node.left, result);
        
        // Traverse the right subtree
        PreorderHelper(node.right, result);
    }
}
