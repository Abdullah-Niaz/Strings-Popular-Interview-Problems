class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        arr = [0] * 26  # Initialize a list of size 26 to count each letter
        for ch in sentence:
            index = ord(ch) - ord('a')  # Get the index of the letter (0-25)
            arr[index] += 1

        for count in arr:
            if count == 0:  # If any letter has a count of 0, it's not a pangram
                return False

        return True


if __name__ == "__main__":
    solution = Solution()
    sentence = "thequickbrownfoxjumpsoverthelazydog"
    if solution.checkIfPangram(sentence):
        print("It is a pangram!")
    else:
        print("It is not a pangram!")
