public class Solution {
    public IList<int> InorderTraversal(TreeNode root) {
        List<int> result = new List<int>();
        InorderHelper(root, result);
        return result;
    }
    
    private void InorderHelper(TreeNode node, List<int> result) {
        if (node == null) {
            return;
        }
        
        // Traverse left subtree
        InorderHelper(node.left, result);
        
        // Visit node
        result.Add(node.val);
        
        // Traverse right subtree
        InorderHelper(node.right, result);
    }
}
