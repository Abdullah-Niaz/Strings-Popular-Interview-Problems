def repeatedSubstringPattern(s: str) -> bool:
    # Concatenate the string with itself
    doubled = s + s
    
    # Remove the first and last characters of the concatenated string
    modified_string = doubled[1:-1]
    
    # Check if the original string is present in the modified string
    return s in modified_string

# Test cases
print(repeatedSubstringPattern("abab"))         # Output: True
print(repeatedSubstringPattern("aba"))          # Output: False
print(repeatedSubstringPattern("abcabcabcabc")) # Output: True
