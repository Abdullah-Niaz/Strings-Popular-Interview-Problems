# int_to_roman.py
class Solution:
    def intToRoman(self, num: int) -> str:
        val = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        sym = ["M", "CM", "D", "CD", "C", "XC",
               "L", "XL", "X", "IX", "V", "IV", "I"]

        result = ""

        for i in range(len(val)):
            while num >= val[i]:
                result += sym[i]
                num -= val[i]

        return result


if __name__ == "__main__":
    num = int(input("Enter an integer: "))
    sol = Solution()
    print("Roman Numeral:", sol.intToRoman(num))
