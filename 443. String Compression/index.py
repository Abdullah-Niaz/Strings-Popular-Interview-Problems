class Solution:
    def compress(self, chars: list[str]) -> int:
        n = len(chars)
        index = 0
        i = 0

        while i < n:
            curr_char = chars[i]
            count = 0

            # Find the duplicates
            while i < n and chars[i] == curr_char:
                count += 1
                i += 1

            # Assign the current character
            chars[index] = curr_char
            index += 1

            # If count is more than 1, convert the count to a string and append it
            if count > 1:
                count_str = str(count)
                for ch in count_str:
                    chars[index] = ch
                    index += 1

        return index


if __name__ == "__main__":
    # Example usage
    solution = Solution()

    # Test case
    chars = ["a", "a", "b", "b", "c", "c", "c"]
    compressed_length = solution.compress(chars)

    print(f"Compressed list: {chars[:compressed_length]}")
    print(f"Length of compressed list: {compressed_length}")
