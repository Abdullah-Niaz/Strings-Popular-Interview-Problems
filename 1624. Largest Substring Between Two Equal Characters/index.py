def maxLengthBetweenEqualCharacters(s: str) -> int:
    first_occurrence = {}
    max_length = -1

    # Traverse through the string
    for i, char in enumerate(s):
        if char in first_occurrence:
            # Calculate the length of the substring between two equal characters
            length = i - first_occurrence[char] - 1
            max_length = max(max_length, length)
        else:
            # Record the first occurrence of the character
            first_occurrence[char] = i

    return max_length


# Test cases
print(maxLengthBetweenEqualCharacters("aa"))      # Output: 0
print(maxLengthBetweenEqualCharacters("abca"))    # Output: 2
print(maxLengthBetweenEqualCharacters("cbzxy"))   # Output: -1
