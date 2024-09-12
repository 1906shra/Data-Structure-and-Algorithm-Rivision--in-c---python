def binary_search(arr, n, key):
    s = 0
    e = n - 1  # note the -1, since array indices start at 0
    while s <= e:
        mid = (s + e) // 2  # use integer division (//) to avoid float results
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            e = mid - 1
        else:
            s = mid + 1
    return -1

n = int(input("Enter the size of the array: "))
arr = [int(x) for x in input("Enter the array elements: ").split()]
key = int(input("Enter the key to search for: "))

result = binary_search(arr, n, key)
print("Element found at index", result) if result != -1 else print("Element not found")