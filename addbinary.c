public class Solution {
    public string AddBinary(string a, string b) {
        int i = a.Length - 1; // Start from the last character of string a
        int j = b.Length - 1; // Start from the last character of string b
        int carry = 0; // Variable to hold carry
        StringBuilder result = new StringBuilder(); // To store the result

        // Process both strings from the last to the first
        while (i >= 0 || j >= 0 || carry != 0) {
            int sum = carry; // Initialize sum with the carry value
            
            // Add current digit of a to sum
            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to int
                i--;
            }
            
            // Add current digit of b to sum
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to int
                j--;
            }
            
            // Append the current result bit (sum % 2)
            result.Insert(0, (sum % 2).ToString());
            
            // Calculate the new carry for next iteration
            carry = sum / 2;
        }
        
        return result.ToString(); // Return the final binary result
    }
}
