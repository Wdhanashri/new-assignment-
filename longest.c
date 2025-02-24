public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        if (strs == null || strs.Length == 0) {
            return "";
        }
        
        string prefix = strs[0]; // Start with the first string as the prefix
        
        for (int i = 1; i < strs.Length; i++) {
            while (strs[i].IndexOf(prefix) != 0) { 
                // Reduce prefix until it matches the beginning of strs[i]
                prefix = prefix.Substring(0, prefix.Length - 1);
                
                if (prefix == "") {
                    return "";
                }
            }
        }
        
        return prefix;
    }
}
