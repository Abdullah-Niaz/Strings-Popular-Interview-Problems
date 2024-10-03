class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        m = len(word1)
        n = len(word2)

        if m != n:
            return False

        freq1 = [0] * 26
        freq2 = [0] * 26

        for i in range(m):
            ch1 = word1[i]
            ch2 = word2[i]

            idx1 = ord(ch1) - ord('a')
            idx2 = ord(ch2) - ord('a')

            freq1[idx1] += 1
            freq2[idx2] += 1

        # 1st condition: all characters in word1 must be present in word2
        for i in range(26):
            if (freq1[i] != 0 and freq2[i] != 0):
                continue
            if (freq1[i] == 0 and freq2[i] == 0):
                continue
            return False

        # 2nd condition: frequencies must match after sorting
        freq1.sort()
        freq2.sort()

        return freq1 == freq2


# Example usage
if __name__ == "__main__":
    solution = Solution()
    word1 = "abc"
    word2 = "bca"

    if solution.closeStrings(word1, word2):
        print("The words are close strings.")
    else:
        print("The words are not close strings.")
