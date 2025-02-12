public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int k = 0; // Pointer for elements not equal to val
        
        for (int i = 0; i < nums.Length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move valid element forward
                k++;
            }
        }
        
        return k; // Number of elements not equal to val
    }
}
