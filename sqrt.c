public class Solution {
    public int MySqrt(int x) {
        if (x == 0 || x == 1) {
            return x; // Directly return the result if x is 0 or 1
        }

        int left = 0, right = x, result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if mid*mid is the perfect square
            if (mid * mid == x) {
                return mid;
            }
            // If mid*mid is less than x, discard the left half
            else if (mid * mid < x) {
                left = mid + 1;
                result = mid; // Save the last valid mid value
            }
            // If mid*mid is greater than x, discard the right half
            else {
                right = mid - 1;
            }
        }
        
        return result; // Return the floor value of the square root
    }
}
