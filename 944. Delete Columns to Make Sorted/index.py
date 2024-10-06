def min_deletion_size(strs):
    n = len(strs)  # Number of strings
    k = len(strs[0])  # Length of each string

    count = 0

    # Loop through each character position
    for i in range(k):
        for j in range(1, n):
            if strs[j][i] < strs[j-1][i]:
                count += 1
                break

    return count


if __name__ == "__main__":
    strs = ["cba", "daf", "ghi"]
    print(f"Minimum deletions: {min_deletion_size(strs)}")
