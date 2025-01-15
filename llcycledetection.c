public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int x) { val = x; next = null; }
}

public class Solution {
    public bool HasCycle(ListNode head) {
        // If the list is empty or has only one node, there's no cycle.
        if (head == null || head.next == null) {
            return false;
        }

        // Initialize the slow and fast pointers.
        ListNode slow = head;   // Tortoise (slow pointer)
        ListNode fast = head;   // Hare (fast pointer)

        // Traverse the list with slow and fast pointers.
        while (fast != null && fast.next != null) {
            slow = slow.next;          // Move slow pointer by 1 step
            fast = fast.next.next;     // Move fast pointer by 2 steps

            if (slow == fast) {
                // If slow and fast pointers meet, a cycle exists.
                return true;
            }
        }

        // If we reach here, there's no cycle in the list.
        return false;
    }
}
