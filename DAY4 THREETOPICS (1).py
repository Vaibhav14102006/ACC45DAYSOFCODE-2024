# cook your dish here
# cook your dish here
l = list(map(int, input().split()))

# Extract the topics
A, B, C, X = l

# Check if X is one of the prepared topics
if X in (A, B, C):
    print("Yes")
else:
    print("No")
