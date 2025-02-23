public class Solution {
    public int SingleNumber(int[] nums) {
        int result = 0;
        foreach (int num in nums) {
            result ^= num; // XOR each number with the result
        }
        return result; // The remaining number is the one that appears only once
    }
}
