def restoreString(s, indices):
    n = len(s)
    result = [''] * n  # Create a list of empty strings of length n

    # Place each character in its correct position based on indices
    for i in range(n):
        result[indices[i]] = s[i]

    return ''.join(result)  # Join the list to form the shuffled string


# Example usage:
s = "codeleet"
indices = [4, 5, 6, 7, 0, 2, 1, 3]

shuffled_string = restoreString(s, indices)
print(shuffled_string)  # Output: "leetcode"
