n = int(input())
arr = [int(x) for x in input().split()]
counter = 1
while counter < n:
    for i in range(n - counter):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
    counter += 1
for i in range(n):
    print(arr[i], end='')