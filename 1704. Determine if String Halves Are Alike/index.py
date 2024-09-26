class Solution:
    def isVowel(self, ch: str) -> bool:
        return ch in 'aeiouAEIOU'

    def halvesAreAlike(self, s: str) -> bool:
        n = len(s)
        mid = n // 2
        countL = 0
        countR = 0

        for i in range(mid):
            if self.isVowel(s[i]):
                countL += 1
            if self.isVowel(s[i + mid]):
                countR += 1

        return countL == countR


if __name__ == "__main__":
    solution = Solution()
    s = input("Enter the string: ")

    result = solution.halvesAreAlike(s)
    if result:
        print("The halves are alike.")
    else:
        print("The halves are not alike.")
