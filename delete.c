public class Solution {
    public ListNode DeleteDuplicates(ListNode head) {
        // If the list is empty or has only one node, return the head as it is
        if (head == null) return head;

        // Initialize the current node
        ListNode current = head;

        // Traverse through the list
        while (current != null && current.next != null) {
            // If the current node's value is equal to the next node's value
            if (current.val == current.next.val) {
                // Skip the next node by pointing to the node after it
                current.next = current.next.next;
            } else {
                // Otherwise, just move to the next node
                current = current.next;
            }
        }
        // Return the modified list
        return head;
    }
}
