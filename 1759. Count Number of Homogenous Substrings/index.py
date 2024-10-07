class Solution:
    MOD = 10**9 + 7

    def count_homogenous(self, s: str) -> int:
        n = len(s)
        result = 0
        length = 0

        # Loop through the string to count homogenous substrings
        for i in range(n):
            if i > 0 and s[i] == s[i - 1]:
                length += 1  # Increment the length if current char is same as the previous
            else:
                length = 1  # Reset the length if the current char differs from the previous
            # Add the length and apply modulus
            result = (result + length) % self.MOD

        return result


if __name__ == "__main__":
    sol = Solution()
    s = "abbcccaa"

    print(f"Number of homogenous substrings: {sol.count_homogenous(s)}")
