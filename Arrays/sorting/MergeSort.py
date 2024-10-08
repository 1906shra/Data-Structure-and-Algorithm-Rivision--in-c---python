def merge(arr, l, m, r):
    # Create a temporary array to store merged elements
    temp = [0] * (r - l + 1)
    
    # Pointers for both halves
    start = l
    end = m + 1
    i = 0
    
    # Merge the two halves
    while start <= m and end <= r:
        if arr[start] <= arr[end]:
            temp[i] = arr[start]
            i += 1
            start += 1
        else:
            temp[i] = arr[end]
            i += 1
            end += 1

    # If any elements are left in the right half
    while end <= r:
        temp[i] = arr[end]
        end += 1
        i += 1

    # If any elements are left in the left half
    while start <= m:
        temp[i] = arr[start]
        start += 1
        i += 1

    # Copy the merged array back into the original array
    index = 0
    while l <= r:
        arr[l] = temp[index]
        l += 1
        index += 1

def merge_sort(arr, l, r):
    if l >= r:
        return
    # Find the mid point
    mid = l + (r - l) // 2
    
    # Sort the two halves
    merge_sort(arr, l, mid)
    merge_sort(arr, mid + 1, r)
    
    # Merge the sorted halves
    merge(arr, l, mid, r)

arr = [38, 27, 43, 3, 9, 82, 10]
n = len(arr)
merge_sort(arr, 0, n - 1)
print("Sorted array is:", arr)
