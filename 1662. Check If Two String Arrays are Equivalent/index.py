class Solution:
    def arrayStringsAreEqual(self, word1: list[str], word2: list[str]) -> bool:
        m = len(word1)
        n = len(word2)

        w1i, i = 0, 0
        w2i, j = 0, 0

        while w1i < m and w2i < n:
            if word1[w1i][i] != word2[w2i][j]:
                return False

            i += 1
            j += 1

            if i == len(word1[w1i]):
                i = 0
                w1i += 1

            if j == len(word2[w2i]):
                j = 0
                w2i += 1

        return w1i == m and w2i == n


# Testing the solution
solution = Solution()
word1 = ["abc", "d"]
word2 = ["abcd"]

if solution.arrayStringsAreEqual(word1, word2):
    print("The concatenations are equal.")
else:
    print("The concatenations are not equal.")
