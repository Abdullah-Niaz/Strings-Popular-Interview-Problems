class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        m = len(s)
        n = len(t)

        i = 0  # pointer for string s
        j = 0  # pointer for string t

        while i < m and j < n:
            if s[i] == t[j]:
                i += 1
                j += 1
            else:
                i += 1

        return n - j  # remaining characters to be appended at the end of s


# Test case
sol = Solution()
s = "abc"
t = "cde"
print("Characters to append:", sol.appendCharacters(s, t))
