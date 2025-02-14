public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int left = 0, right = nums.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;  // To prevent overflow
            
            if (nums[mid] == target) {
                return mid;  // Target found
            } else if (nums[mid] < target) {
                left = mid + 1;  // Target is on the right
            } else {
                right = mid - 1;  // Target is on the left
            }
        }
        
        // If not found, `left` will be the index where it should be inserted
        return left;
    }
}
