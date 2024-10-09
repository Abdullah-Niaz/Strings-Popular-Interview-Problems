def findTheDifference(s: str, t: str) -> str:
    xor_result = 0
    
    # XOR all characters in s
    for char in s:
        xor_result ^= ord(char)
    
    # XOR all characters in t
    for char in t:
        xor_result ^= ord(char)
    
    # The final result will be the ASCII value of the extra character
    return chr(xor_result)

# Driver code to test the function
if __name__ == "__main__":
    # Example 1
    s = "abcd"
    t = "abcde"
    print(f"Extra character in t: {findTheDifference(s, t)}")  # Output: "e"
    
    # Example 2
    s = ""
    t = "y"
    print(f"Extra character in t: {findTheDifference(s, t)}")  # Output: "y"
