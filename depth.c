public class Solution {
    public int MinDepth(TreeNode root) {
        if (root == null) {
            return 0;
        }
        
        Queue<KeyValuePair<TreeNode, int>> queue = new Queue<KeyValuePair<TreeNode, int>>();
        queue.Enqueue(new KeyValuePair<TreeNode, int>(root, 1));  // Root node at depth 1
        
        while (queue.Count > 0) {
            var nodePair = queue.Dequeue();
            TreeNode node = nodePair.Key;
            int depth = nodePair.Value;
            
            // Check if it's a leaf node
            if (node.left == null && node.right == null) {
                return depth;
            }
            
            // Add children to the queue with incremented depth
            if (node.left != null) {
                queue.Enqueue(new KeyValuePair<TreeNode, int>(node.left, depth + 1));
            }
            if (node.right != null) {
                queue.Enqueue(new KeyValuePair<TreeNode, int>(node.right, depth + 1));
            }
        }
        
        return 0;  // This line should never be reached because we always find a leaf node
    }
}
