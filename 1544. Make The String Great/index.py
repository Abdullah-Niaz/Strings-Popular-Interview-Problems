class Solution:
    def makeGood(self, s: str) -> str:
        result = []

        for ch in s:
            if result and (result[-1].lower() == ch.lower()) and (result[-1] != ch):
                result.pop()
            else:
                result.append(ch)

        return ''.join(result)


# Testing the solution
if __name__ == "__main__":
    solution = Solution()
    input_str = "leEetcode"
    output_str = solution.makeGood(input_str)
    print(f"Output: {output_str}")
