class Solution:
    def quick_sort(self, arr, low, high):
       
        if low >= high:
            return
        pivot = self.partition(arr, low, high)
        self.quick_sort(arr, low, pivot - 1)
        self.quick_sort(arr, pivot + 1, high)

    def partition(self, arr, low, high):
        
        pos = low
        for i in range(low, high + 1):
            if arr[i] <= arr[high]:
                arr[i], arr[pos] = arr[pos], arr[i]
                pos += 1
        return pos - 1

    def print_array(self, arr):
       
        print(' '.join(map(str, arr)))


def main():
    solution = Solution()
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        solution.quick_sort(arr, 0, n - 1)
        solution.print_array(arr)


if __name__ == "__main__":
    main()