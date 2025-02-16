public class Solution {
    public int ClimbStairs(int n) {
        if (n == 1) {
            return 1; // Only one way to reach the top if there is 1 step
        }
        
        int first = 1, second = 2;
        
        // Calculate number of ways for each step starting from the 3rd step
        for (int i = 3; i <= n; i++) {
            int temp = first + second;
            first = second;
            second = temp;
        }
        
        return second; // Return the number of ways to reach the nth step
    }
}
