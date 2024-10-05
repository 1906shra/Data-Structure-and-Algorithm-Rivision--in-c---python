# Python implementation of Selection Sort

# Take input for the number of elements
n = int(input())

# Create an empty list to store the elements
arr = []

# Take input for each element and append to the list
for _ in range(n):
    c = int(input())
    arr.append(c)

# Selection Sort
for i in range(n-1):
    min_idx = i
    for j in range(i+1, n):
        if arr[min_idx] > arr[j]:
            min_idx = j
    if min_idx != i:
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

# Print the sorted list
print(arr)