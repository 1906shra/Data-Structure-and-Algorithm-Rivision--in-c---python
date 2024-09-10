def linearsearch(arr, key):
    for i, element in enumerate(arr):
        if element == key:
            return i
    return -1

n = int (input())
arr = [int(x) for x in input().split()]
key = int(input())
print(linearsearch(arr, key))