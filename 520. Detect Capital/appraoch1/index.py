class Solution:
    def allCapital(self, word: str) -> bool:
        for ch in word:
            if not ('A' <= ch <= 'Z'):
                return False
        return True

    def allSmall(self, word: str) -> bool:
        for ch in word:
            if not ('a' <= ch <= 'z'):
                return False
        return True

    def detectCapitalUse(self, word: str) -> bool:
        if self.allCapital(word) or self.allSmall(word) or self.allSmall(word[1:]):
            return True
        return False


# Example usage
solution = Solution()
word = "USA"  # Example word
result = solution.detectCapitalUse(word)
print("True" if result else "False")
