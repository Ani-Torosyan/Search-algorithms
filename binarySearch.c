#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
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

    int result = binarySearch(arr, 0, n - 1, target);

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