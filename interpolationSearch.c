#include <stdio.h>

int interpolationSearch(int arr[], int n, int key) 
{
    int low = 0, high = n - 1;
    while (low <= high && key >= arr[low] && key <= arr[high]) 
    {
        if (low == high) 
        {
            if (arr[low] == key) return low;
            return -1;
        }
        int mid = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));
        if (arr[mid] == key) 
        {
            return mid;
        }
        if (arr[mid] < key) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    printf("\n");

    int target = 20;
    printf("Target: %d", target);
    printf("\n");

    int result = interpolationSearch(arr, n, target);

    if (result == -1)
    {
        printf("Not found.\n");
    }
    else
    {
        printf("The index is: %d", result + 1);
    }

    return 0;
}
