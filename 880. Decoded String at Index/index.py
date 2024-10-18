class Solution:
    def decodeAtIndex(self, s: str, k: int) -> str:
        size = 0

        # Step 1: Calculate the total size of the decoded string
        for ch in s:
            if ch.isdigit():
                size *= int(ch)
            else:
                size += 1

        # Step 2: Iterate the string from the end and decode
        for i in range(len(s) - 1, -1, -1):
            k %= size  # Wrap the k index

            # If k is 0 and the character is a letter, it's the answer
            if k == 0 and s[i].isalpha():
                return s[i]

            # Adjust the size based on the character
            if s[i].isdigit():
                size //= int(s[i])
            else:
                size -= 1

        return ""


# Example usage:
solution = Solution()
print(solution.decodeAtIndex("leet2code3", 10))  # Output: "o"
