#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high){
            return ;
        }
        int pivote = partition(arr,low,high);
        quickSort(arr,low,pivote-1);
        quickSort(arr,pivote+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
       int pos=low;
       for(int i=low;i<=high;i++){
           if(arr[i]<=arr[high]){
               swap(arr[i],arr[pos]);
               pos++;
               
           }
           
       }
       return pos-1;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}