public class Solution {
    public int LengthOfLastWord(string s) {
        // Trim any trailing spaces first
        s = s.Trim();
        
        // Find the last space in the string and return the length of the substring after it
        int lastSpaceIndex = s.LastIndexOf(' ');
        return s.Length - lastSpaceIndex - 1;
    }
}
