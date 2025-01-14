class Solution:

    # Encoding function
    def encode(self, strs):
        encoded_string = ""
        
        # Loop through each string in the list
        for string in strs:
            # Concatenate the length of the string, a delimiter, and the string itself
            encoded_string += str(len(string)) + "#" + string
        
        return encoded_string

    # Decoding function
    def decode(self, s):
        decoded_list = []
        i = 0
        
        # Decode each string from the encoded string
        while i < len(s):
            # Find the position of the delimiter
            delimiter_index = s.index('#', i)
            
            # Get the length of the next string
            length = int(s[i:delimiter_index])
            
            # Extract the string based on the length
            string = s[delimiter_index + 1: delimiter_index + 1 + length]
            
            # Add the decoded string to the list
            decoded_list.append(string)
            
            # Move to the next part of the string
            i = delimiter_index + 1 + length
        
        return decoded_list

# Example usage
solution = Solution()

# Encode the list of strings
strs = ["neet", "code", "love", "you"]
encoded = solution.encode(strs)
print("Encoded string:", encoded)

# Decode the encoded string back to the original list
decoded = solution.decode(encoded)
print("Decoded list:", decoded)
