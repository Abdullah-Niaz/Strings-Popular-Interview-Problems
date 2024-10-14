def isAcronym(words, s):
    # Create the acronym by concatenating the first characters of each word
    acronym = ''.join(word[0] for word in words)

    # Check if the acronym matches the string s
    return acronym == s


# Test cases
words1 = ["alice", "bob", "charlie"]
s1 = "abc"
print(isAcronym(words1, s1))  # Output: True

words2 = ["an", "apple"]
s2 = "a"
print(isAcronym(words2, s2))  # Output: False

words3 = ["never", "gonna", "give", "up", "on", "you"]
s3 = "ngguoy"
print(isAcronym(words3, s3))  # Output: True
