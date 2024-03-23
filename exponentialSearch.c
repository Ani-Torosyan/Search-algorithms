#include <stdio.h>
#include <stdlib.h>

int BSREC(int array[], int n, int left, int right, int key)
{
    int mid;
    if(left > right)
    {
        return -1;
    }
    else 
    {    
        mid = (left + right)/2;
    }

    if(array[mid] == key)
    {
        return mid;
    }
    else if(array[mid] > key)
    {
        return BSREC(array, n, left, mid - 1, key);
    }
    else 
    {
        return BSREC(array, n, mid + 1, right, key);
    }
    
}

int exponentialSearch(int arr[], int n, int key) 
{
    if (arr[0] == key) 
    {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= key) 
    {
        i *= 2;
    }
    return BSREC(arr, n, i / 2, (i < n - 1) ? i : n - 1, key);
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

    int result = exponentialSearch(arr, n, target);

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