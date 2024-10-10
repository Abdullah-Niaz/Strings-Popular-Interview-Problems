def countSegments(s: str) -> int:
    # Split the string at spaces and filter out empty strings
    segments = s.split()
    return len(segments)


# Example usage
s = "Hello, my name is John"
print("Number of segments:", countSegments(s))
