n = int(input())
arr = [int(x) for x in input().split()]

for i in range(1, n):
    current = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > current:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = current

for i in range(n):
    print(arr[i], end='')