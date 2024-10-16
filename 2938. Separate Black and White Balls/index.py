class Solution:
    def minimumSteps(self, s: str) -> int:
        n = len(s)
        swap = 0
        black = 0
        for i in range(n):
            if s[i] == '0':  # move this to the right
                swap += black
            else:
                black += 1
        return swap


if __name__ == "__main__":
    solution = Solution()
    s = input("Enter string of 0's and 1's: ")
    print("Minimum steps:", solution.minimumSteps(s))
