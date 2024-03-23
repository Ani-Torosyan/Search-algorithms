#include <stdio.h>

int linearSearch(int arr[], int n, int target) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            return i;
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

    int result = linearSearch(arr, n, target);

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
