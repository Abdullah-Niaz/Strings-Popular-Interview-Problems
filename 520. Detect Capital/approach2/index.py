class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        countCapital = 0

        # Counting the number of uppercase characters
        for ch in word:
            if ch.isupper():
                countCapital += 1

        # Check if all letters are lowercase
        if countCapital == 0:
            return True

        # Check if all letters are uppercase
        if countCapital == len(word):
            return True

        # Check if only the first letter is uppercase
        if countCapital == 1 and word[0].isupper():
            return True

        return False


# Example usage
solution = Solution()
word = "USA"  # Example word
result = solution.detectCapitalUse(word)
print("True" if result else "False")
