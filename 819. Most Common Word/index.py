import re
from collections import Counter


def mostCommonWord(paragraph: str, banned: list[str]) -> str:
    # Convert the paragraph to lowercase and replace punctuation with spaces
    normalized_str = re.sub(r'[^\w\s]', ' ', paragraph.lower())

    # Split the normalized string into words
    words = normalized_str.split()

    # Create a set for faster lookup of banned words
    banned_set = set(banned)

    # Count the frequencies of words that are not banned
    word_count = Counter(word for word in words if word not in banned_set)

    # Find the most common word
    return word_count.most_common(1)[0][0]


# Test cases
print(mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", [
      "hit"]))  # Output: "ball"
print(mostCommonWord("a.", []))  # Output: "a"
