#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    // Temporary vector to store merged result
    vector<int> temp(r - l + 1);
    int start = l;  // Pointer for the left subarray
    int end = m + 1;  // Pointer for the right subarray
    int i = 0;  // Index for temp array
    
    // Merge both halves into temp[]
    while (start <= m && end <= r) {
        if (arr[start] <= arr[end]) {
            temp[i] = arr[start];
            i++;
            start++;
        } else {
            temp[i] = arr[end];
            i++;
            end++;
        }
    }

    // If there are remaining elements in the right half
    while (end <= r) {
        temp[i] = arr[end];
        end++;
        i++;
    }

    // If there are remaining elements in the left half
    while (start <= m) {
        temp[i] = arr[start];
        start++;
        i++;
    }

    // Copy the sorted elements back into the original array
    int index = 0;
    while (l <= r) {
        arr[l] = temp[index];
        l++;
        index++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
        return;  // Base case: array of size 1
    }
    
    // Find the mid point of the array
    int mid = l + (r - l) / 2;

    // Recursively sort both halves
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    // Merge the two sorted halves
    merge(arr, l, mid, r);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call mergeSort on the entire array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
