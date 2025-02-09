public class Solution {
    public bool HasCycle(ListNode head) {
        if (head == null) return false;  // If the list is empty, there's no cycle.

        ListNode slow = head;  // Tortoise (slow pointer)
        ListNode fast = head;  // Hare (fast pointer)

        while (fast != null && fast.next != null) {
            slow = slow.next;        // Move slow by one step
            fast = fast.next.next;   // Move fast by two steps

            if (slow == fast) {  // Cycle detected
                return true;
            }
        }

        return false;  // No cycle found
    }
}
